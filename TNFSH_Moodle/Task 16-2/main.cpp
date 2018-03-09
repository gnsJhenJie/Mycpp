//gnsJhenJie 2018 Copyright. All rights reserved.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    char abc[201];
    stack<char> checkit;
    cin.ignore();
    bool correct = true;
    int numberforcheck=0;
    while(x!=0){
        x--;
        cin.get(abc,sizeof(abc));
        for (int i=0;i<strlen(abc);i++){
            if ((abc[i]=='(')||(abc[i]==')')){
                checkit.push(abc[i]);
            }else if (abc[i]==0){
                break;
            }
        }
        while (checkit.size()!=0){
            switch (checkit.top()){
                case '(' :
                    numberforcheck--;
                    break;
                case ')' :
                    numberforcheck++;
                    break;
            }
            if (numberforcheck<0){
                correct = false;
                break;
            }
            checkit.pop();
        }
        if ((correct == true)&&(numberforcheck == 0)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        //reset for next enter
        cin.ignore();
        correct = true;
        numberforcheck = 0;
        while (!checkit.empty()){
            checkit.pop();
        }
    }
    return 0;
}
