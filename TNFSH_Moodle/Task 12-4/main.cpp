// Moodle!.cpp : Defines the entry point for the console application.
//
#include <stdafx.h>
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
	double first = 0;
	int firstnum=0;
	double second = 0;
	int secondnum=0;
	double third = 0;
	int thirdnum=0;
	int temp1;
	int temp2;
	//enter
	for (int person = 0; person < pamt; person++) {
		for (int subject = 0; subject < samt+1; subject++) {
			cin >> x;
			score[person][subject]=x;
			sumtemp += x;
		}
		sumtemp -= score[person][0];
		score[person][samt+1] = sumtemp;  //person sum
		if (sumtemp > first) {
			temp1 = firstnum;
			temp2 = secondnum;
			firstnum = score[person][0];
			secondnum = temp1;
			thirdnum = temp2;
			temp1 = first;
			temp2 = second;
			first = sumtemp;
			second = temp1;
			third = temp2;
			sumtemp = 0;
		}else if (sumtemp>second){
			temp1 = secondnum;
			secondnum = score[person][0];
			thirdnum = temp1;
			temp1 = second;
			second = sumtemp;
			third = temp1;
			sumtemp = 0;
		}
		else if (sumtemp > third) {
			thirdnum = score[person][0];
			sumtemp = 0;
			third = sumtemp;
			sumtemp = 0;
		}
		else {
			sumtemp = 0;
		}
	}
	cout << "1: " << firstnum << "\n2: " << secondnum << "\n3: " << thirdnum << endl;;
	return 0;
}
