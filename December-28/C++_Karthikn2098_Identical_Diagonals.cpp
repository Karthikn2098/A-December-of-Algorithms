/*
Given an M x N matrix,
    write a function to determine if the diagonals of the matrix are identical.
*/

#include <bits/stdc++.h>
#define M 3  //no of rows...
#define N 4  //no of columns...
using namespace std;

/**
 * @desc: function that checks all the diagonal elements.
 * @param: 2D-matrix , two indexes.
 * @return: true if all are equal , false otherwise.
 */
bool diagonalCheck( int mat[M][N] , int i , int j ) {

    int num = mat[i][j];

    while( ++i < M && ++j < N) {
        if( num != mat[i][j] )
            return false;
    }

    return true;
}

bool checkIdenticalDiagonals( int mat[M][N] ) {

    //traversing the top most row...
    for( int i = 0 ; i < M ; i++ ) {
        if( !(diagonalCheck(mat , 0 , i)) ) {
            return false;
        }
    }

    //traversing the left most column...
    for( int i = 1 ; i < N ; i++ ) {
        if( !(diagonalCheck(mat , i , 0)) ) {
            return false;
        }
    }

    return true;
}

int main(void) {

    int mat[M][N] = {
                    1, 2, 3, 4,
                    5, 6, 7, 8,
                    1, 4, 7, 9,
                  };

    if( checkIdenticalDiagonals(mat) ) {
        cout << "Identical Diagonals\n";
    }
    else {
        cout << "Diagonals are non-identical\n";
    }


    return 0;
}


/*
Sample Input/Output:

1)          int mat[M][N] = {
                            7, 4, 6, 8,
                            1, 7, 4, 6,
                            9, 1, 7, 4
                            };

            Identical Diagonals

2)          int mat[M][N] = {
                            1, 2, 3, 4,
                            5, 6, 7, 8,
                            1, 4, 7, 9,
                            };

            Diagonals are non-identical


*/
