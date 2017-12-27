//
//  main.cpp
//  For Loop Complement1-2
//
//  Created by student on 2017/12/27.
//  Copyright © 2017年 TNFSH104. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x; cin >>x; int num=1; bool coutblank=false;
    int height=(x-1)/2;
    //cout << " ";
    for (int j=1;j<=height+1;j++){
        for (int i=1; i<=height-j+1; i++) {
            cout <<" ";
        }
        cout <<"*";
        for (int i=1; i<=num-1; i++) {
            cout <<" ";
            coutblank=true;
        }
        if (coutblank==true) {
            cout<<"*";
            coutblank=false;
        }
        cout <<endl;
        if (num==1) {
            num--;
        }
        num+=2;
        
    }
    num-=5;
    for (int i=1; i<=height-1; i++) {
        for (int j=1; j<=i; j++) {
            cout << " ";
        }
        cout <<"*";
        for (int j=1; j<=num; j++) {
            cout <<" ";
            
        }
        num-=2;
        cout << "*";
        cout << endl;
        if (num<0) {
            for (int k=1; k<=height; k++) {
                cout <<" ";
            }
            cout<<"*"<<endl;
        }
    }
    
    return 0;
}
