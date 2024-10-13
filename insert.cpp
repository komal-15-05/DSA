/*
INSERT(LA,N,K,ITEM)
1.) set J = N
2.) repeat steps 3 and 4 while J <= K
3.) set LA[J+1] = LA[J]
4.) set J = J-1
end of step 2 loop
5.) set LA[K] = ITEM
6.) set N = N + 1
7.) exit

*/

#include<iostream>
using namespace std;
void display(int array[],int n){
    cout<<"the array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";

    }

}

void insert(int arr[], int n , int k, int item){
    int j=n;
    while (j>=k-1)
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[k-1]=item;
}

int main(){
    int n;
    int k,item;
    cout<<"enter the size of an array"<<endl;
    cin>>n;

    int array[n];
    cout<<"enter the value of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];

    }
    display(array,n);
    cout<<endl<<"enter the item and the place where you want to insert"<<endl;
    cin>>item>>k;

    insert(array,n,k,item);
    n = n+1;

    cout<<"the new array is"<<endl;
    for (int i = 0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;

}

