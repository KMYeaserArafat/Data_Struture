
/* Linear Search Programe - 01
* At frist take input for the array's power/value/ or declear array's size,
* take input value and store into this array,
* Search Data, when Search Data is found print : Data is found,
*            OR, when Search Data is not found Print : Data is not found,
* not found data automatricly insert into the array..
* set a option for shorting data by Ascending order or Dscending order,
*/

#include<iostream>
using namespace std;

void optionfunction1(){
    cout<<"Are you wantto Insert Data ? (y/n) : ";
}

void optionfunction2(){
    cout<<"-------------------"<<endl;
    cout<<"01) Ascending Order"<<endl;
    cout<<"02) Dscending Order"<<endl;
   cout<<"-------------------"<<endl;

}

int main(){

    int value1;

    cout<<"How Much data you want to Take : ";
    cin>>value1;

    int Array1[value1];   // Declear the Array1[] , int type;

    cout<<"Input "<<value1<<" Values : ";
    for(int a=0; a<value1; a++){
        cin>>Array1[a];
    }
    cout<<endl;
//show Input Data, 
    cout<<"Show Data : ";
    for(int a=0; a<value1; a++){
        cout<<Array1[a]<<" ";
    }
    cout<<endl;

//Search Data into the Array, 
   int Search_Data1,flag;
   cout<<"Enter the Search Element : ";
   cin>>Search_Data1;
   for(int a=0; a<value1; a++){
    if(Array1[a]==Search_Data1){
           flag++;
    }
   }

   if(flag != 0){
      cout<<Search_Data1<<" is Found "<<endl;
   }
   else if(flag == 0 ){
    cout<<Search_Data1<<" is not Found "<<endl;
    /*When Data is Not Found Here Make a  condition : */;
    char option1;
    optionfunction1();
    cin>>option1;
    if(option1=='y'){
        //Insert Data; 
        for(int c=value1-1; c>=value1; c-- ){
            Array1[c+1] = Array1[c];
        }
        Array1[value1-1]=Search_Data1;


    }
    else if(option1=='n'){
        cout<<"Can't Insert Data";
    }
    
    int temp;

    optionfunction2();
    int option2;
    cout<<"Enter your Option : ";
    cin>>option2;
    if(option2==1){
        //Asending order;
        for(int a=0; a<value1; a++){
            for(int b=a+1; b<value1; b++){
                 if(Array1[a]>Array1[b]){
                     temp=Array1[a];
                     Array1[a]=Array1[b];
                     Array1[b]=temp;
                 }
            }
        }
        cout<<"Show Data by Ascending Order : ";
        for(int a=0; a<value1; a++){
            cout<<Array1[a]<<" ";
        }
        cout<<endl;
    }
    else if(option2==2){
         //Dsending order;
        for(int a=0; a<value1; a++){
            for(int b=a+1; b<value1; b++){
                 if(Array1[a]<Array1[b]){
                     temp=Array1[a];
                     Array1[a]=Array1[b];
                     Array1[b]=temp;
                 }
            }
        }
        cout<<"Show Data by Dscending Order : ";
        for(int a=0; a<value1; a++){
            cout<<Array1[a]<<" ";
        }
        cout<<endl;
    }
   

   }



    return 0;
}