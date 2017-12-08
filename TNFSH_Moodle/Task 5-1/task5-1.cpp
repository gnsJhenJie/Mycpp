//
//  main.cpp
//  task 5-1
//
//  Created by gnsJhenJie on 2017/11/22.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,a;
    cin >>n;
    a=n;
    for (int i=1; i<=a; i++) {
        for (int j=1; j<=i ; j++) {
            cout <<n;
        }
        n--;
        cout <<endl;
    }
    return 0;
}
