//
//  main.cpp
//  task 4-6
//
//  Created by gnsJhenJie on 2017/11/15.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,result;
    cin >>a;
    result=0;
    for (int i = a; i>0 ; i--) {
        if ((a%i==0)&&(i!=1)&&(i!=a)) {
            result=result+i;
        }
    }
    cout << result <<endl;
    return 0;
}
