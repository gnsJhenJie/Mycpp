// Moodle!.cpp : Defines the entry point for the console application.
//
#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

double magic(int x) {
	if (x == 0) {
		return 0;
	}
	else {
		double answer = 0;
		for (double i = 1; i <= x;i++) {
			answer += 1 / i;
		}
		return answer;
	}
}

int main() {
	int x;
	cin >> x;
	printf("%.4f\n",magic(x));
	return 0;
}
