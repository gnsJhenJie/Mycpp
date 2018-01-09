//
//  main.cpp
//  Complement 1-5
//
//  Created by gnsJhenJie on 2018/1/9.
//  Copyright © 2018年 gnsJhenJie. All rights reserved.
//  The Maxmium of Input is 100.

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x; cin >>x;
    cout << "    ";
    for (int i=1 ; i<=x; i++) {
        cout<<i<<"  ";
    }
    cout<<endl<<"    ";
    for (int i=1 ; i<=3*x-1; i++) {
        cout <<"-";
    }
    cout<<endl;
    for (int i=1 ; i<=x ; i++) {
        if (i<10){
            cout <<i<<"*  ";
        }else{
            cout <<i<<"* ";
        }
        for (int j=1 ; j<=x ; j++) {
            if (i*j<10){
            cout<<i*j<<"  ";
            }else if (i*j<100){
                cout<<i*j<<" ";
            }else{
                cout<<i*j;
            }
        }
        cout<<endl;
    }
    return 0;
}
