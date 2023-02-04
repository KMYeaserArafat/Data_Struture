/*Linked List
*/

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};


int main(){

    Node *nptr, *tptr, *record;

    record = NULL;

    

    int node_Number;
    cout<<"Enter the Node Number : ";
    cin>>node_Number;

    int node_value;
    cout<<"Enter the Node Value : ";
    for(int a=0; a<node_Number; a++){
        cin>>node_value;
        nptr = new(Node);
        nptr->data = node_value;
        nptr->next = NULL;
       
       if(record == NULL){
           record = nptr;
           tptr = nptr;
       }
       else{
          tptr->next = nptr;
          tptr = nptr;
       }
    }

    tptr = record;
    for(int a=0; a<node_Number; a++){
        cout<<endl;
        cout<<tptr->data;
        tptr = tptr->next;
    }

    cout<<endl;

    return 0;
}