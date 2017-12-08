//
//  main.cpp
//  task 4-10
//
//  Created by gnsJhenJie on 2017/11/22.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    long long int n;
    cin >>n;
    if (n==0) {
        cout <<0<<" ";
    }else if (n==1){
        cout <<0<<" "<<1<<" ";
    }else{
        long long int one,two,tmp;
        one=1;
        two=1;
        cout <<0<<" "<<1<<" "<<1<<" ";
        for (int i=3; i<=n; i++) {
            cout << one+two<<" ";
            tmp=one+two;
            two=one;
            one=tmp;
        }
    }

    return 0;
}
