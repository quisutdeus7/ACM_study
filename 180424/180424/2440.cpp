/*
*	author : quisutdeus7
*	BJO : no. 2440
*	status : solved
*/
#include<iostream>
using namespace std;

int n;

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int k = n-i; k >0; k--)
			cout << "*";
		cout << "\n";
	}


	return 0;
}