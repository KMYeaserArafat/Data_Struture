/* a. Insert New Node to the tree.
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
    Node* data = new Node;
    data->key = iteam;
    data->left = NULL;
    data->right = NULL;
    return data;
}

void printTree(Node* root){
     
     if(root !=NULL){
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
        node->left = insert(node->left, insert_element);
    }
    else{
        node->right = insert(node->right, insert_element);
    }

    return node;
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



    return 0;
}