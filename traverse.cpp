#include<iostream>
using namespace std;

void traverse(int array[],int n){
    cout<<"the array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";

    }

}
int main(){
    int n;
    int array[5] = {10,15,17,13,20};
    n = 5;
    traverse(array,n);
    return 0;

    
}