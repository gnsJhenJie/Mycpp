//
//  main.cpp
//  task 4-7
//
//  Created by gnsJhenJie on 2017/11/15.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b;
    b=0;
    cin >>a;
    for (int i=1;i<=a;i++) {
        if ((a%i==0)&&(i!=1)&&(i!=a)) {
            cout <<i<<endl;
        }else {
            b++;
        }
    }
    if (b==a) {
        cout << "prime"<<endl;
    }
    
    return 0;
}
