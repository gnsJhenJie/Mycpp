// Moodle!.cpp : Defines the entry point for the console application.
//
//gnsJhenJie 2018 All rights reserved.

#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;
	double enter[1000];
	double enterscore;
	for (int i = 0; i < n ; i++) {
		cin >> enterscore;
		enter[i] = enterscore;
	}
	bool success=0 ;
	double temp;
	while (!success) {
		success = 1;
		for (int i = 0; i < n ; i++){
			if (enter[i] < enter[i + 1]) {
				temp = enter[i+1];
				enter[i + 1] = enter[i];
				enter[i] = temp;
				success = 0;
			}
		}
	}
	for (int i=0 ; i < n; i++){
		cout << enter[i] << endl;
	}
	return 0;
}
