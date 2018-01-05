#include<iostream>
using namespace std;
int main(){
    int x;
    cin >>x;
    int strnum=2*x-1;
    int dotnum=1;
    for (int i=1;i<=x;i++){
        for (int j=1;j<=dotnum;j++){
            cout <<".";
        }
        for (int k=1;k<=strnum;k++){
            cout <<"*";
        }
        for (int l=1;l<=dotnum;l++){
            cout<<".";
        }
        cout<<endl;
        dotnum++;
        strnum-=2;
    }
}
