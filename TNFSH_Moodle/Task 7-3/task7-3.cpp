//
//  main.cpp
//  Task 7-3
//
//  Created by gnsJhenJie on 2017/12/20.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x; cin >>x; int a[x];
    int max=0,min=0,sum=0;
    for (int i=0; i<x; i++) {
        cin >>a[i];
    }
    for (int i=0; i<x; i++) {
        if (a[i]>max) {
            max=a[i];
        }
        min=max;
    }
    for (int i=0; i<x; i++) {
        if (a[i]<min){
            min=a[i];
        }
        sum+=a[i];
    }
    int avg=sum/x;
    cout <<sum<<endl<<avg<<endl<<max<<endl<<min<<endl;
    return 0;
}
