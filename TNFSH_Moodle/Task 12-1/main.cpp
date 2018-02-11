// Moodle!.cpp : Defines the entry point for the console application.
//
#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int pamt, samt; cin >> pamt;
	samt = 2;
	int score[100][10];
	//enter
	for (int person = 0; person < pamt; person++) {
		for (int subject = 0; subject < samt; subject++) {
			cin >> score[person][subject];
		}
	}
	//sort(by number)
	bool success = 0;
	int temp;
	while (!success) {
		success = 1;

		for (int person = 0; person < pamt; person++) {
			if (score[person][1] < score[person + 1][1]) {
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
	for (int person = 0; person < pamt; person++) {
		cout << person + 1 << " ";
		for (int subject = 0; subject < samt; subject++) {
			cout << score[person][subject];
			if (subject==0){
			    cout<<" ";
			}
		}
		cout << endl;
	}
	return 0;
}
