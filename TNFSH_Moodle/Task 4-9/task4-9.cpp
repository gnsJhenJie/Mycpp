//
//  main.cpp
//  task 4-9
//
//  Created by gnsJhenJie on 2017/11/22.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int num;
    double sum,avg;
    bool nopass;
    nopass=false;
    sum=0;
    cin >>num;
    for (int i=1; i<=num ; i++) {
        double enter;
        cin >> enter;
        sum += enter;
        if (enter<60) {
            nopass = true;
        }
    }
    if (nopass==true){
        cout <<"Oh, No!!!"<<endl;
    }
   // avg=sum/num;
   // if (avg<60) {
        //cout << "Oh, No!!!"<<endl;
   // }
    else{
        cout << "HAHA, I PASS!!! Bite me!!!\n";
    }
    return 0;
}
