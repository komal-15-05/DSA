/*
algo for tower of hanoi

TOWER(N, BEG, AUX, END)
IF N = 1
    MOVE BEG TO END
    RETURN
IF N>1 THEN REPEAT THE FOLLOWING:

MOVE N-1 DISKS FROM BEG TO AUX 
    CALL TOWER(N-1, BEG, END, AUX)

MOVE N-1 DISKS FROM AUX TO END 
    CALL TOWER(N-1, AUX, BEG, END)

RETURN
*/

#include <iostream>
using namespace std;

void tower( int n, string beg, string aux, string end){
    if(n == 1){
        cout << "Move disk 1 from " << beg << " to " << end << endl;
        return;
    }
    tower(n-1, beg, end, aux);
    cout << "Move disk " << n << " from " << beg << " to " << end << endl;

    tower(n-1, aux, beg, end);
    cout << "Move disk " << n << " from " << aux << " to " << end << endl;
    
}
int main(){
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    tower(n, "A", "B", "C");
    return 0;
}