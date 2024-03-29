#include "stdafx.h"
#include <string>
#include <iostream>

using std::string;	using std::cin;
using std::cout;	using std::endl;

/*Takes in a positive integer N and a text string of capital english letters
and. Each letter in the string is then shifted N places later in the alphabet.
Note that after Z comes A.*/
int main()
{
	int N;    //denotes the number of shifts
	string s; //denotes the string that will be decrypted
	cin >> N >> s;
	for (string::iterator iter = s.begin(); iter != s.end(); ++iter) {
		cout << char((*iter + N - 65) % 26 + 65);
	}
	cout << endl;
	return 0;
}

/*
Example input:
10
QJJQSAQJTQMD

Output:
ATTACKATDAWN
*/