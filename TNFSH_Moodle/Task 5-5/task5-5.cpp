//Copyright 2017 gnsJhenJie.All rights reserved.

#include<iostream>
#include<string.h>
#include<stdio.h>
#include<string>
#include<sstream>
using namespace std;
int main(){
    int x;
    cin >>x;
    int tmp=1,strnum=1;
    if (x%2==0){
        cout <<"This is a X'mas tree"<<endl;
        return 0;
    }
    for (int i=1;i<=x;i++){
        for (int j=x-i-1;j>=0;j--){
            cout <<" ";
        }
        for (int k=1;k<=tmp;k++){
            cout <<strnum;
        }
        strnum++;
        tmp+=2;
        cout <<endl;
    }
    int n=1;
    for (int l=1;l<=x-1;l++){
        for (int m=1;m<=x-1;m++){
            cout <<" ";
        }
        cout <<n<<endl;
        n++;
    }
}
