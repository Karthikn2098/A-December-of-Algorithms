#include <iostream>
using namespace std;

int main(void) {

    int N;

    cin >> N;

    //Mesh Topology: For a fully connected network N*(N-1)/2 connections are needed to form a mesh.
    cout << "For " << N << " people " << N * (N - 1)/2 << " strings are needed...";

    return 0;
}

/*
Sample Input/Output:

    Input: 5
    For 5 people 10 strings are needed...

    Input: 10
    For 10 people 45 strings are needed...

*/
