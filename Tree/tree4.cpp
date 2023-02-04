/* d. Find only the parent of given two nodes. For example, if 4,7 given, parent is 6. If 1,13 is given, then no parent found. If 1,6 is given then parent is 3.
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

void findParent(Node* node, int value1,int value2,int parent){
    if(node==NULL){
        return;
    }
    
    if(node->key == value1 && node->key == value2){
        cout<<parent;
    }
    else{
        findParent(node->left,value1,value2,node->key);
        findParent(node->right,value1,value2,node->key);
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
     
     int higest_level = 4;

     cout<<"4,7 is given, parent is : ";
     findParent(root,higest_level,4,7);
     cout<<endl;

     cout<<"1,13 is given, parent is : ";
     findParent(root,higest_level,1,13);
     cout<<"No parent Found";
     cout<<endl;

     cout<<"1,6 is given, parent is : ";
     findParent(root,higest_level,1,6);
     cout<<endl;



    return 0;
}