//Copyright 2017 gnsJhenJie.All right reserved.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=(n-i);j++){
            cout <<".";
        }
        for (int k=1;k<=i;k++){
            cout <<"*";
        }
        cout <<endl;
    }
    for (int l=n-1;l>=1;l--){
        for (int m=1;m<=n-l;m++){
            cout << ".";
        }
        for (int n=1;n<=l;n++){
            cout <<"*";
        }
        cout <<endl;
    }
}
