//
//  main.cpp
//  task 4-3
//
//  Created by gnsJhenJie on 2017/11/1.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace ::std;
int main(int argc, const char * argv[]) {
    long long int a,b;
    long long int max,min,c,result;
    cin>>a>>b;
    if (a<0|b<0) {
        return 0;
    }
    if (a>b) {
        max=a;
        min=b;
    }else if (a==b){
        cout <<a<<endl;
        return 0;
    }else{
        max=b;
        min=a;
    }
    c=min;
    result=0;
    for (c; c<=max; c=c+1) {
        result=result+c;
    }
    cout <<result<<endl;
    return 0;
}
