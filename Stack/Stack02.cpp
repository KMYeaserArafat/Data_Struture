/*stack 02
// user input value,
*/


#include<iostream>
using namespace std;

int Maxsize = 5;
int top = 0;
int stack02[5];


void Menu(){
    cout<<"***************** "<<endl;
    cout<<"1) Push Value "<< endl;
    cout<<"2) Pop Value "<< endl;
    cout<<"3) Display the full stack"<<endl;
    cout<<"4) EXIT "<<endl;
    cout<<"***************** "<<endl;
}

bool isEmpty(){
    if(top == 0){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if(top == Maxsize){
        return true;
    }
    else{
        return false;
    }
}

bool push(int element){
    cout<<"Push Value : "<< element<< endl;
    cout<<"Top Value  : "<< top << endl;
    if(isFull()){
        cout<<"The stack is overflow"<<endl;
        return false;
    }
    else{
        stack02[top] = element;
        top++;
        cout<<"Pushed, The Current top : "<< top << endl;
    }
}

bool pop(){
    cout<<"The Top value : "<< top << endl;
    if(isEmpty()){
        cout<<"The Stack is underflow,you can insert value"<<endl;
    }
    else{
        top--;
        cout<<"Pop Value : "<< stack02[top]<<endl;
        cout<<"Poped, The Current top : "<< top << endl;
    }
}

int main(){

    bool flag;

    while(flag = true){

Menu();

int option;

cout<<"Choose your  option : ";
cin>>option;

if(option == 1){
    cout<<"You select the Push Option, "<<endl;
    int push_Element;
    cout<<"Enter the Push Element : ";
    cin>>push_Element;
    push(push_Element);
}
else if(option == 2){
     cout<<"You select the pop Option, "<<endl;
     int value_pop;
     cout<<"How Many Values you can pop : ";
     cin>>value_pop;
     for(int a=0; a<value_pop; a++){
        pop();
     }
     
  }
  else if(option == 3){
    cout<<"You select the Display the full stack option,"<<endl;
  for(int a=0; a <5; a++){
        cout<<stack02[a]<<" ";
    }  
    cout<<endl;
  }
  else{
    cout<<"You select the Exit . X "<<endl;
    break;
  }

    }

    return 0;
}