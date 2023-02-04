/* c.Find the level of a given node. For example, 13 is in level 4, 3 is in level 2.
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
    if(root !=NULL){
        printTree(root->left);
        cout<<root->key<<" ";
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

int find(Node* root,int a,int b)
{
    if(!root){
        return 0;
    }
    if(root->key==a){
        return b;
    }
    int x=find(root->left,a,b+1);
    if(x!=0){
        return x;
    }
    x=find(root->right,a,b+1);
    return x;
}

int getLevel(struct Node *node, int target)
{
    if(!node){
        return 0;
    }
  int c=1;
    return find(node,target,c);
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

     cout<<"13 is in level : ";
     cout<<getLevel(root,13);
     cout<<endl;

     cout<<"3 is in level : ";
     cout<<getLevel(root,3);
     cout<<endl;


    return 0;
}