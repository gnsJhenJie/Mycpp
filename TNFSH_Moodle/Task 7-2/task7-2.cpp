//
//  main.cpp
//  Task 7-2
//
//  Created by gnsJhenJie on 2017/12/20.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x; cin >>x; int a[x];
    int more=0,same=0,less=0;
    
    for (int i=0; i<x; i++) {
        cin >> a[i];
    }
    
    for (int j=1; j<x; j++) {
        if (a[j]>a[0]) {
            more++;
        }else if (a[j]<a[0]){
            less++;
        }else{
            same++;
        }
    }
    cout << less << endl << same <<endl <<more<<endl;
    return 0;
}
