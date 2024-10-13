/* 
algorithim for deletion in array
DETELE [LINEAR ARRAY, N, K, ITEM]
SET ITEM = LA[K]
REPEAT FOR J = K TO J-1
SET LA[J] = LA[J+1]
END OF LOOP
SET N = N-1 
EXIT
*/

#include<iostream>
using namespace std;


int main(){
    int n;
    int k,item;

    cout<<"enter the size of array"<<endl;
    cin>>n;

    int array[n];
    cout<<"enter the values of the array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"the array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
    cout<<endl<<"enter the location of element you wanna del"<<endl;
    cin>>k;
    
    item = array[k-1];
    for(int j = k-1; j < n-1; j++)
    {
        array[j]=array[j + 1];

    }
    n = n-1;
    cout<<"the element on location " <<k<< " which was " <<item<< " is deleted successfully. 3" <<endl;
    cout<<"the new array is"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;

}
