/*
ALGORITHM FOR POP IN STACK
POP[STACK,TOP,MAXSTK,ITEM]

1. IF TOP = 0 THEN:
    PRINT: UNDERFLOW

2. SET ITEM = STACK[TOP]
3. SET TOP = TOP-1
EXIT
*/

#include<iostream>
using namespace std;

void display(int array[], int n){
    cout<<"the array is"<<endl;

    for(int i = 0; i < n; i++ ){
        cout<<array[i]<<" ";
    } 

    cout<<endl;
}

void pop(int stack[], int &top, int &item)
{

    if (top == -1 )
    {
        cout<<"underflow"<<endl;

    }
    else{
       
        top = top - 1;
        item = stack[top];
    }
}

int main(){
    int array[10] = {2,4,8,64,80,10,7,9};
    int top = 8;
    int item = 0;
    pop(array,top,item);
    display(array,top);
    return 0;
}      

