#include <bits/stdc++.h>
using namespace std;

vector<string> S;

/**
 * @desc: function to get the permutations of the given string.
 * @param: string , two indexes.
 */
void permutation( string s, int l, int r )
{
   if (l == r)
     S.push_back(s);
   else
   {
       for (int i = l; i <= r; i++)
       {
          swap((s[l]), (s[i]));
          permutation(s, l+1, r);
          swap((s[l]), (s[i]));
       }
   }
}

int main(void) {

    string str;

    cout << "Enter the string: ";
    cin >> str;

    permutation(str , 0 , str.length()-1);

    sort( S.begin() , S.end() );    //sorting the strings.

    for(int i = 0 ; i < S.size() ; i++ ) {
        if( str == S[i] ) {
            cout << endl << "Match Found at position " << i+1;
        }
    }

    return 0;
}


/*
    Enter the string: dac
    Match Found at position 5
*/
