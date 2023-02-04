/** Simple stack
*/


#include<iostream>
using namespace std;

int maxsize = 5;
int stack[5];
int top = 0;

bool isEmpty(){
    if(top == 0){
        return true;
    }
    else{
        return false;
    }
}


bool isFull(){
    if(top == maxsize){
        return true;
    }
    else{
        return false;
    }
}

bool push(int element){
    cout<<"Push Value : "<< element << endl;
    cout<<"Top : "<< top << endl;
    if(isFull()){
        cout<<"The Stack is overflow"<<endl;
        return false;
    }
    else{
        stack[top] = element;
        top++;
        cout<<"Pushed, The Current top value : "<< top << endl;
    }
}

bool pop(){
    cout<<"The Top Value : "<< top << endl;
    if(isEmpty()){
        cout<<"The stack is underflow, insert the value"<<endl;
    }
    else{
        top--;
        cout<<"POP Value : "<< stack[top] << endl;
        cout<<"Poped, The new top Value : "<< top << endl;
    }
}

int main(){

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

pop();

    return 0;
}
