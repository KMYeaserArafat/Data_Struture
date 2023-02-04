/* b. Delete node from the tree.
...
       8       level : 1
      /\
     3  10     level : 2
    /\   \
   1  6   14   level : 3
     /\    /
    4  7  13   level : 4
         
*/

#include<iostream>
using namespace std;

struct Node{
    int key;
    struct Node* left;
    struct Node* right;
};

Node* newNode(int iteam){
    Node* temp = new Node;
    temp->key = iteam;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void printTree(Node* root){

    if(root != NULL){
        printTree(root->left);
        cout<<root->key << " ";
        printTree(root->right);
    }
}

Node* insert(Node* node, int insert_element){

    if(node == NULL){
        return newNode(insert_element);
    }

    if(insert_element<node->key){
       node->left = insert(node->left,insert_element);
    }
    else{
        node->right = insert(node->right,insert_element);
    }
    return node;
}

Node* deleteNode(Node* root, int delete_element){

	if (root == NULL){
		return root;
    }
	if (root->key > delete_element) {
		root->left = deleteNode(root->left, delete_element);
		return root;
	}
	else if (root->key < delete_element) {
		root->right = deleteNode(root->right, delete_element);
		return root;
	}

	if (root->left == NULL) {
		Node* temp = root->right;
		delete root;
		return temp;
	}
	else if (root->right == NULL) {
		Node* temp = root->left;
		delete root;
		return temp;
	}

	else {

		Node* succParent = root;
		Node* succ = root->right;
		while (succ->left != NULL) {
			succParent = succ;
			succ = succ->left;
		}

		if (succParent != root)
			succParent->left = succ->right;
		else
			succParent->right = succ->right;

		root->key = succ->key;

		delete succ;
		return root;
	}
}

int main(){

     Node* root = NULL;
     root = insert(root,8);
     root = insert(root,3); 
     root = insert(root,10); 
     root = insert(root,1);
     root = insert(root,6);
     root = insert(root,14); 
     root = insert(root,4);
     root = insert(root,7); 
     root = insert(root,13); 
     printTree(root);

    cout<<endl;
    cout<<"Delete 8, from the tree : ";
	root = deleteNode(root, 8);
	printTree(root);

    cout<<endl;
    cout<<"Delete 3, from the tree : ";
	root = deleteNode(root, 3);
	printTree(root);

    cout<<endl;
    cout<<"Delete 10, from the tree : ";
	root = deleteNode(root, 8);
	printTree(root);


    return 0;
}