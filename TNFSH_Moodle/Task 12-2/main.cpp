// gnsJhenJie.me All rights reserved.
//

#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int pamt, samt; cin >> pamt;
	samt = 4;
	int score[100][4];
	//enter
	for (int person = 0; person < pamt; person++) {
		score[person][0] = person;
		cin >> score[person][1]; //seatnumber
		cin >> score[person][2]; //score
	}
	//sort(by score)
	bool success = 0;
	int temp;
	while (!success) {
		success = 1;
		for (int person = 0; person < pamt; person++) {
			if (score[person][2] < score[person + 1][2]) {
				for (int j = 0; j < samt; j++) {
					temp = score[person][j];
					score[person][j] = score[person + 1][j];
					score[person + 1][j] = temp;
				}
				success = 0;
			}
		}
	}
	//input rank to array
	for (int i = 0; i < pamt; i++) {
		score[i][3] = i + 1;
	}
	//sort array to the begining type
	success = 0;
	while (!success) {
		success = 1;
		for (int person = 0; person < pamt; person++) {
			if ((score[person][0] > score[person + 1][0])&&(person<pamt-1)) {
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
		cout << score[person][1]<<" "<<score[person][3]<<" "<<score[person][2]<<endl;
	}

	return 0;
}
