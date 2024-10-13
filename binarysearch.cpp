#include<iostream>
using namespace std;

void Binary_Search(int Array[],int LB, int UB, int ITEM, int LOC){
    int BEG = LB;
    int END = UB;
    int MID = (BEG + END)/2;
    while (BEG <= END && Array[MID] != ITEM)
    {
        if (ITEM < Array[MID])
        {
            END = MID -1;
        }
        else{
            BEG = MID +1;
        }
        MID = (BEG + END) / 2;
    }
    if (Array[MID] == ITEM)
    {
        LOC = MID+1;
        cout<<"The ITEM Found at location "<<LOC<<endl;
    }
    else{
        LOC = -1;
        cout<<"The ITEM not found in the given Array"<<endl;
    }

    
}

int main(){
    int Array[10] = {2,4,6,8,10,12,14,16,18,20};
    int ITEM = 16;
    int LOC = 0;
    Binary_Search(Array,0,10,ITEM,LOC);
    return 0;
}