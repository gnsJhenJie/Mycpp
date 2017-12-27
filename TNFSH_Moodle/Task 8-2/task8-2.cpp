//
//  main.cpp
//  Task 8-2
//
//  Created by gnsJhenJie on 2017/12/27.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    double sum=0; double avg; int A=0; int B=0; int C=0; int D=0; int E=0; int MAXScore=0; int MAXnumber;
    int x; cin >>x; int a[x]; int rx=x; double dx=x;
    for ( ; rx>0; rx--) {
        cin >> a[x-rx];
    }
    for (int i=0; i<x; i++) {
        sum+=a[i];
        if (a[i]>MAXScore) {
            MAXnumber=i+1;
            MAXScore=a[i];
        }
        switch (a[i]) {
            case 90 ... 100:
                A++;
                break;
            case 80 ... 89:
                B++;
                break;
            case 70 ... 79:
                C++;
                break;
            case 60 ... 69:
                D++;
                break;
            default:
                E++;
                break;
        }
    }
    avg=sum/dx;
    printf("%.2f\n",avg);
    cout <<MAXnumber<<endl<<"A:";
    for (int i=1; i<=A; i++) {
        cout << "*";
    }
    cout<<endl<<"B:";
    for (int i=1; i<=B; i++) {
        cout << "*";
    }
    cout<<endl<<"C:";
    for (int i=1; i<=C; i++) {
        cout << "*";
    }
    cout<<endl<<"D:";
    for (int i=1; i<=D; i++) {
        cout << "*";
    }
    cout<<endl<<"E:";
    for (int i=1; i<=E; i++) {
        cout << "*";
    }
    cout<<endl;
    return 0;
}
