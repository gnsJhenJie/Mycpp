//
//  main.cpp
//  task
//
//  Created by Hsieh Jhen Jie on 2018/1/21.
//  Copyright © 2018年 TNFSH104. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int x; cin >>x;
    double avg[x];
    for (int i=0 ; i<x; i++) {
        double a,b,c; cin >>a>>b>>c;
        avg[i]=(a+b+c)/3;
    }
    for (int i=x-1; i>=0; i--) {
        cout<<i+1<<": ";
        printf("%.2f\n",avg[i]);
    }
    return 0;
}
