//gnsJhenJie Copyrights 2018. All rights reserved.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int min,max,goal,count=0;
    cin >> min >> max >> goal ;
    bool getgoal=false; //檢查有沒有猜對（預設猜錯(這樣才會猜第一次數字)）
    int guessnum;
    while (getgoal==false){  //若猜錯
        guessnum=(max+min)/2;  //將下一個猜的數字改為(MAX+min)/2
        count++;  //並且將猜數字的次數+1
        if (guessnum==goal){  //如果猜的數字為正確答案
            getgoal=true;  //將getgoal改為true,即使while loop不再執行（不在猜）
            cout << count <<": "<<guessnum<<endl;  //輸出題目要求
        }else{
            cout <<count<<": "<<guessnum<<endl;  //輸出題目要求
            if(guessnum>goal){  //若猜的數字大於正確答案
                max=guessnum-1;  //將MAX改為猜的數-1（因為猜的數字為錯誤答案,所以正確答案的MAX為猜的數字-1）
            }else{
                min=guessnum+1;  //將min改為猜的數字+1（同理max=guessnum-1）
            }
        }
    }
    return 0;
}
