//Copyright 2017 EathonLu.All rights reserved/
//20170811 Created.
//

#include"stdafx.h"
#include <iostream>
using namespace std;
int main() {
	int path, tree, light, i, number = 0;
	while (cin >> path >> tree >> light) {
	if (tree > path)
		cout << "Bumbler government is not a necessary evil. It is just evil.";
	else {
		cout << "S";
		for (i = 1; i <= path; i++) {
			if (number%light == 0 && number != 0 && i%tree == 0) {
				cout << "X";
				number = 0;
			}
			else if (i%tree == 0) {
				cout << "T";
				number++;
			}
		}
	}
}
	return 0;
}
