/*
Problem :

    There is a n-sided polygon.
        Find the number of diagonals that are possible.
*/

#include <bits/stdc++.h>
using namespace std;

//main function
int main(void) {

    int N;

    cin >> N;   //getting No of sides of the polygon.

    //For N-points there will be  N*(N-1)/2 segments.
    //In order to get the no of diagonals, subtract the sides of the polygon from the total no of segments...
    int no_of_segments = ( N * (N-1) / 2 );

    int no_of_diagonals = no_of_segments - N;

    cout << "Input: " << N << "\nOutput: " << no_of_diagonals << endl;

    return 0;
}

/*
Sample Input/Output:

Input: 4
Output: 2

Input: 5
Output: 5

Input: 8
Output: 20

Input: 11
Output: 44

*/

