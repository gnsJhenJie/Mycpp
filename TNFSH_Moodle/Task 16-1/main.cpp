//gnsJhenJie 2018 CopyRight.All rights reserved.
#include <bits/stdc++.h>
using namespace std;
int main(){
    char abc[201];
    stack<char> checkit;
    cin.get(abc,sizeof(abc));
    int numberforcheck=0;
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
            cout<<"NO"<<endl;
            return 0;
        }
        checkit.pop();
    }
    if (numberforcheck!=0){
        cout<<"NO\n";
        return 0;
    }
    cout << "YES\n";
    return 0;
}
