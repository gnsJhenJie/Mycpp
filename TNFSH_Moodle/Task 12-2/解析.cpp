// gnsJhenJie.me All rights reserved.
//

#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int pamt, samt; cin >> pamt; //pamt為全班人數 samt為科目數
	samt = 4;
	int score[100][4];//score[?][0]:輸入次序 [?][1]:seatnumber [?][2]:score [?][3]:ranking
  
	//enter
	for (int person = 0; person < pamt; person++) {
		score[person][0] = person; //score[person][0]儲存輸入的次序
		cin >> score[person][1]; //seatnumber
		cin >> score[person][2]; //score
	}
  
	//bubble sort(by score)
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
		score[i][3] = i + 1; //score[i][3]store ranking
	}
  
	//sort array to the begining type(according to score[person][0])
	success = 0;
	while (!success) { //using for loop run person-1 times is acceptable too
		success = 1; //using for loop run person-1 times is acceptable too
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
	} //using for loop run person-1 times is acceptable too
  
	//Output
	for (int person = 0; person < pamt; person++) {
		cout << score[person][1]<<" "<<score[person][3]<<" "<<score[person][2]<<endl;
	}

	return 0;
}
