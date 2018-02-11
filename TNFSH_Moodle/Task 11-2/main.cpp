// Moodle!.cpp : Defines the entry point for the console application.
//

#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int pamt, samt; cin >> pamt >> samt;
	int score[100][10];
	//enter
	for (int person = 0; person < pamt; person++) {
		for (int subject = 0; subject < samt; subject++) {
			cin >> score[person][subject];
		}
	}
	//sort(by number)
	bool success = 1;
	int temp;
	while (!success) {
		success = 1;

		for (int person = 0; person < pamt; person++) {
			if (score[person][0] > score[person + 1][0]) {
				for (int j = 0; j < samt; j++) {
					temp = score[person][j];
					score[person][j] = score[person + 1][j];
					score[person + 1][j] = temp;
				}
				success = 0;
			}
		}
	}
	//Output
	int sum=0;
	for (int person = 0; person < pamt; person++) {
		cout << person + 1 << ",";
		for (int subject = 0; subject < samt; subject++) {
			cout << score[person][subject]<<",";
			sum+=score[person][subject];
		}
		cout <<sum<<","<< endl;
		sum=0;
	}
	return 0;
}
