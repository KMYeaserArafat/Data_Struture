/*Queue
*/

#include<iostream>
using namespace std;

int Queue[5];
int front = 0;
int rear = 0;
int maxsize = 5;

bool isEmpty(){
    if((front==0 && rear == 0) || (front == rear)){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if(rear == maxsize){
        return true;
    }
    else{
        return false;
    }
}

bool enQueue(int element){
    cout<<"EnQueue Element : "<< element << endl;
    cout<<"Front Value : " << front <<endl;
    cout<<"Rear Value  : " << rear <<endl;
    if(isFull()){
        cout<<"The Queue is Full"<<endl;
        return false;
    }
    else{
        Queue[rear] = element;
        rear++;
        cout<<"Queue, The Current Front : "<< front<< endl;
        cout<<"Queue, The Current Rear  : "<< rear << endl;
        return true;
    }
}

bool deQueue(){
    cout<<"DeQueue : "<< endl;
    cout<<"Front Value : "<< front <<endl;
    cout<<"Rear  Value : "<< rear << endl;
    if(isEmpty()){
        cout<<"The Queue is Empty " << endl;
        return true;
    }
    else{
        cout<<"DeQueue Element : "<< Queue[front]<< endl;
        front++;
        cout<<"DeQueue, The Current Front : "<< front << endl;
        cout<<"DeQueue, The Current Rear  : "<< rear << endl;
        return false;
    }
}

int main(){

    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);

     deQueue();


    return 0;
}
