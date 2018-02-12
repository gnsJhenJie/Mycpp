// Moodle!.cpp : Defines the entry point for the console application.
//
#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

double magic(int x) {
	if (x == 0) {
		return 0;
	}
	else if (x == 1) {
		return 1;
	}
	else {
		return magic(x - 1) + magic(x - 2);
	}
}

int main() {
	int x;
	cin >> x;
	cout << magic(x)<<endl;
	return 0;
}
