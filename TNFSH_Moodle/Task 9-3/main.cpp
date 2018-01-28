//gnsJhenJie 2018 All rights reserved.
//

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	char enter[20000];

	cin.get(enter, sizeof(enter));
	int a = strlen(enter)-1;
  char reverse[20000];
	for (int i = 0 ; i <=strlen(enter) ; i++) {
		reverse[i] = enter[a];
		a--;
	}

	for (int i = 0; i< strlen(enter); i++) {
		if (enter[i] != reverse[i]) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
