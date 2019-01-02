/*

Determinant for 2x2 Matrix:

         |a   b|
matrix = |     | ----> (ad - bc)
         |c   d|


Determinant for 3x3 Matrix:

         |a  b  c|
         |       |
matrix = |d  e  f| ----> a * (ei - fh) - b*(di - gf) + c*(dh - eg)
         |       |
         |g  h  i|



*/


#include <bits/stdc++.h>
using namespace std;

int main(void) {

    int a , b , c , d , e , f , g , h , i;

    int mat2[2][2] = {
                      3 , 8,
                      4 , 6
                     };

    a = mat2[0][0] , b = mat2[0][1] , c = mat2[1][0] , d = mat2[1][1];

    cout << "Determinant of mat2 is... " << (a * d) - (b * c);

    int mat3[3][3] = {
                        4 , 9 , 2 ,
                        3 , 5 , 7 ,
                        8 , 1 , 6
                     };

     a = mat3[0][0] , b = mat3[0][1] , c = mat3[0][2] , d = mat3[1][0] , e = mat3[1][1] , f = mat3[1][2] , g = mat3[2][0] , h = mat3[2][1] , i = mat3[2][2];

     cout << "\n\nDeterminant of mat3 is... " << a * (e*i - f*h) - b*(d*i - g*f) + c*(d*h - e*g);

}

/*
Output:

    Determinant of mat2 is... -14

    Determinant of mat3 is... 360
*/
