// Moodle!.cpp : Defines the entry point for the console application.
//

#include <bits/stdc++.h>
//#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int encode(int delta,char content[22]) {
	for (int i = 2; i < strlen(content) ; i++) {
		if (content[i] + delta > 90) {
			cout << (char)(content[i] + delta - 90 + 64);
		}
		else {
			cout << (char)(content[i] + delta);
		}
	}
	cout << endl;
	return 0;
}

int decode(int delta,char content[22]) {
	for (int i = 2; i < strlen(content); i++) {
		if (content[i] - delta < 65) {
			cout << (char)(content[i] - delta + 90 - 64);
		}
		else {
			cout << (char)(content[i] - delta);
		}
	}
	cout << endl;
	return 0;
}

int main(int argc, char** argv) {
	char enter[22];
	cin.get(enter, sizeof(enter));
	if (enter[0] == '+') {
		encode(enter[1]-48,enter);
	}else {
		decode(enter[1]-48,enter);
	}
	return 0;
}
