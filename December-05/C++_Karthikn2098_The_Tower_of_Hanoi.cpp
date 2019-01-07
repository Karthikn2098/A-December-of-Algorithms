#include <bits/stdc++.h>
using namespace std;

/**
 * @desc: tower of hanoi recursive function.
 * @param: no of disks, three towers.
 */
void towerOfHanoi(int N , string left , string right , string middle ) {

    if(N == 1) {
        cout << endl << left << " => " << right;
        return;
    }
    towerOfHanoi(N-1 , left , middle , right);
    cout << endl << left << " => " << right;
    towerOfHanoi(N-1 , middle , right , left);

}

int main(void) {

    int N;

    cout << "Enter No of disks: ";
    cin >> N;

    towerOfHanoi( N , "left" , "right" , "middle" );

    return 0;
}

/*
Sample Input/Output:

    Enter No of disks: 3

    left => right
    left => middle
    right => middle
    left => right
    middle => left
    middle => right
    left => right

*/
