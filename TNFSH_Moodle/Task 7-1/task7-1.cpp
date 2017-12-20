//
//  main.cpp
//  Task 7-1
//
//  Created by gnsJhenJie on 2017/12/20.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x; cin >>x;
    int a[x];
    for (int i=0; i<x; i++) {
        cin >> a[i];
    }
    for (int j=x-1; j>=0; j--) {
        cout << a[j]<<" ";
    }
    cout <<endl;
    return 0;
}

