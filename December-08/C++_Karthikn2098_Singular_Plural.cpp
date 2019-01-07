#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str , plural;
	int n;
	char ch,ch2;

	cout << "Enter the singular form: ";
	cin>>str;

        n = str.length();
        ch = str[n-1];    //getting last character
        ch2 = str[n-2];   //getting second last character

		if (ch=='y') {
            plural = str.substr(0,n-1)+"ies";
		}
		else if ( ch=='o' || ch=='s' || ch=='x' || ch=='z' || (ch2=='s'&&ch=='s') || (ch2=='s'&&ch=='h') ) {
            plural = str+"es";
		}
		else if ( ch=='h'&& ch2=='c' ) {
            plural = str+"es";
		}
		else if ( ch== 'f' ) {
            plural = str.substr(0,n-1)+"ves";
		}
		else if ( ch=='e'&&ch2=='f' ) {
            plural = str.substr(0,n-2)+"ves";
		}
		else {
            plural = str + "s";
		}

		cout << "\nThe plural form for " << str << " is... " << plural << endl;

	return 0;
}


/*
Sample Input/Output:

    Enter the singular form: Apple
    The plural form for Apple is... Apples


    Enter the singular form: Wife
    The plural form for Wife is... Wives

*/
