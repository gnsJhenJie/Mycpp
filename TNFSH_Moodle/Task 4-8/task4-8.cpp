//
//  main.cpp
//  task 4-8
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
    int a,b,result,c;
    c=0;
    b=0;
    result=0;
    cin >>a;
    if (a<0){
        a=a*-1;
        c=1;
    }else if (a==0){
        cout << "XD"<<endl;
        return 0;
    }
    for (int i=1;i<=a;i++) {
        if ((a%i==0)&&(i!=1)&&(i!=a)) {
            result += i;
        }else {
            b++;
        }
    }
    if (b==a) {
        cout << "XD" <<endl;
    }else if (c==1) {
        result= result +a;
        cout << result <<endl;
    }else {
       // result -=1;
        cout << result <<endl;
    }
    
    return 0;
}
