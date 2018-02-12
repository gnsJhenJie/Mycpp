// Moodle!.cpp : Defines the entry point for the console application.

#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int pamt, samt; cin >> pamt>>samt;
	int nopass = 0;
	double score[102][11] = {0};
	double sumtemp = 0;
	double x;
	double max = 0;
	int maxseatnum;
	//enter
	for (int person = 0; person < pamt; person++) {
		for (int subject = 0; subject < samt; subject++) {
			cin >> x;
			score[person][subject]=x;
			sumtemp += x;
			score[pamt][subject] += x / pamt;  //subject average
		}
		if (sumtemp > max) {
			maxseatnum = person + 1;
			max = sumtemp;
		}
		if (sumtemp / samt < 60) {
			nopass++;
		}

		score[person][samt] = sumtemp / samt;  //person average
		sumtemp = 0;

	}
	//Output everyone's average
	for (int person = 0; person < pamt; person++) {
		printf("%.2f ", score[person][samt]);
	}
	cout << endl;
	//Output every subject's average
	for (int subject = 0; subject < samt; subject++) {
		printf("%.2f ", score[pamt][subject]);
	}
	//Output the highest seatnumber
	cout <<endl <<maxseatnum << endl;
	//Output nopass amount
	cout << nopass << endl;
	return 0;
}
