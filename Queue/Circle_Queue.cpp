/**Circle Queue
...*/

#include<iostream>
using namespace std;

int front = 0;
int rear = 0;
int MaxSize = 5;
int Circle_Queue[5];

bool isEmpty(){
    if((front == 0 && rear == 0)|| (front == rear)){
        return true;
    }
    else{
        return false;
    }
}


bool isFull(){
    if(rear == MaxSize){
        return true;
    }
    else{
        return false;
    }
}

bool enQueue(int element){
    cout<<"EnQueue Element : "<< element << endl;
    cout<<"Front value : "<< front <<" and Rear Value : "<< rear << endl;
    if(isFull()){
        cout<<"The Circle Queue is full "<<endl;
        return false;
    }
    else{
        Circle_Queue[rear] = element;
        rear++;
        cout<<"EnQueue, The Current Front value : "<< front <<endl;
        cout<<"EnQueue, The Current Rear Value  : "<< rear << endl;
        return true;
    }
}

bool deQueue(){
    cout<<"DeQueue "<<endl;
    cout<<"Front Value : "<< front << " and Rear Value : "<< rear << endl;
    if(isEmpty()){
        cout<<"The Circle Queue is Empty"<<endl;
        return false;
    }
    else{
        cout<<"DeQueue element : " << Circle_Queue[front]<< endl;
         front++;
        cout<<"DeQueue, The Front Value : "<< front << endl;
        cout<<"DeQueue, The Rear Value  : "<< rear << endl;
        return true;
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
