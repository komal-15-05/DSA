/* 
algo for linear search
linear search[data,n,item,loc]
set data[n+1]=item 
set loc = 1
repeat while data [loc] =! item
set loc = loc+1
if loc = n+1 then  set loc = 0
exit

*/ 

#include<iostream>
using namespace std;

void linearsearch(int array[],int n,int item, int loc){
    array[n] = item;
    loc = 0;
    while(array[loc] != item){
        loc = loc+1;
    }
    if(loc == n){
        loc = -1;
        cout<<"the element is not found in the array"<<endl;

    }
    else{
        cout<<"the element is found in the array at location "<<loc+1<<endl;

    }
}

int main(){
    int loc;
    int array[5] = {10,15,20,25,30};
    linearsearch(array,5,25,loc);
    return 0;
}


    
        
    
    


