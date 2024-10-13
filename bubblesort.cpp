/*
algorithm to sort an array using bubble sort
BUBBLE-SORT[ARRAY,N]
1. START
2. REPEAT STEPS 3 AND 4 FOR K=1 TO N-1
3. SET PRT=1
4. REPEAT WHILE PTR <= N-K
(a) IF ARRAY[PTR] > ARRAY[PTR + 1] THEN
       INTERCHANGE ARRAY[PTR] AND ARRAY[PTR+1]
    [END OF IF STRUCTURE]

(b) set PTR = PTR+1
    [END OF INNER LOOP]
END OF OUTER LLOOP 
5. EXIT
*/

#include<iostream>
using namespace std;

int PTR;
int N;
int temp;
void display(int array[], int n){
    cout<<"the sorted array is"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<array[i]<<" "; 
    }
}


void bubblesort(int array[],int N)
{
    for(int k = 0; k < N; k++)
    {
        PTR = 0;
        while (PTR <= N-k)
        {
            if (array[PTR] > array[PTR + 1])
            {
                temp = array[PTR];
                array[PTR] = array[PTR + 1];
                array[PTR + 1] = temp;
            }
            PTR = PTR + 1;
        }


    }
    display(array,N);
}

int main(){
    int array[8] = {11,33,14,10,88,44,67,90};
    N = 8;
    bubblesort(array,N);
    return 0;
}
