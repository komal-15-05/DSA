/*

stack [push]
ALGORITHM FOR PUSH
PUSH[STACK,TOP,MAXSTK,ITEM]

1. IF TOP = MAXSTK then:
      print : overflow and exit

2.  SET TOP = TOP+1
3.  SET STACK[TOP] = ITEM

4.  EXIT

*/

#include<iostream>
using namespace std;

void display(int stack[],int N){
    cout<<"the stack is "<<endl;

    for(int i = 0; i <= N; i++){
        cout<<stack[i]<<" ";
    }  
}


void push(int stack[], int &top, int maxstk, int item){
    if (top == maxstk) {
        cout<<" overflow "<< endl;

    }
    else{
        top = top+1;
        stack[top]=item;

    }

}

int main(){
    int stack[6] = {2,3,5,8,10,11};
    int top = 6;
    int maxstk = 6;
    int item = 9;
    push(stack,top,maxstk,item);
    display(stack,top);
    
    return 0;

}


