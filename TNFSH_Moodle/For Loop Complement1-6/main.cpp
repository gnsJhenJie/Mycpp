//
//  main.cpp
//  Complement 1-6
//
//  Created by gnsJhenJie on 2018/1/9.
//  Copyright © 2018年 gnsJhenJie. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int value; cin >>value;
    int length=1;int ans =0;
    int rvalue=value;
    for (; ; ) {
        value /= 10;
        if (value ==0 ) break;
        length++;
    }
    //cout <<length;
    for (int i=pow(10,length); i>0; i /= 10) {
        ans += rvalue/i;
        rvalue -= (rvalue/i)*i;
    }
    cout<<ans<<endl;
    return 0;
}
