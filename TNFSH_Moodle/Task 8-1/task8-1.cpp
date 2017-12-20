//
//  main.cpp
//  Task 8-1
//
//  Created by gnsJhenJie on 2017/12/20.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x; cin >>x; bool a[x+1];
    for (int i=1; i<=x; i++) {
        a[i]=false;
    }
    a[0]=true;
    int attend ; cin >>attend;
    for (int i=1; i<=attend; i++) {
        int seatnum; cin >>seatnum;
        a[seatnum]=true;
    }
    for (int i=1; i<=x; i++) {
        if (a[i]==false) {
            cout <<i<<" ";
        }
    }
    cout <<endl;
    return 0;
}
