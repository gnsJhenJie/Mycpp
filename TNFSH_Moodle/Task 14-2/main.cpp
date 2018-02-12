// Moodle!.cpp : Defines the entry point for the console application.
//
#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int magic(int x,int y) {
	if (y == x) {
		return 1;
	}
	else if (y == 0) {
		return 1;
	}
	else {
		return magic(x-1,y) + magic(x-1,y-1);
	}
}

int main() {
	int x,y;
	cin >> x>>y;
	cout << magic(x,y)<<endl;
	return 0;
}
