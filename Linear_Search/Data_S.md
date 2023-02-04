
# <b>Data Structure</b>
<img src="unstructured-data.png" width="300" height="300" title="Data_Struture"/>
<p>
<br><i> Code by : K.M. Yeaser Arafat</i></br>
---
</p>

### <p><i>
Here I will try to write some of the Data Struture code, These code we are using lot of time...
</i>
</p>


## <b>Code List : </b>

 [x] Linear Search    
 [x] Doubly Link List  
 [x] Link List  
 [x] Queue
 [x] Stack    
 [x] Tree

 
# <br>
 ## - Linear Search 
</br>

#### Here all thing is user input,At first  declear array's value, and input data from user :
```C++

int main(){

    int value1;

    cout<<"How Much data you want to Take : ";
    cin>>value1;

    int Array1[value1];   

    cout<<"Input "<<value1<<" Values : ";
    for(int a=0; a<value1; a++){
        cin>>Array1[a];
    }
    cout<<endl;

    cout<<"Show Data : ";
    for(int a=0; a<value1; a++){
        cout<<Array1[a]<<" ";
    }
    cout<<endl;
}

````

#### Here search value into the array : 

```c++

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
    }
    
    