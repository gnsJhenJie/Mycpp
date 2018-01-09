//
//  main.cpp
//  Complement 1-4
//
//  Created by gnsJhenJie on 2018/1/9.
//  Copyright © 2018年 gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int h,w; cin >>h>>w;
    for (int i=1 ; i<=h; i++) {
        if (i%2==1) {
            for (int j=1 ; j<=w ; j++) {
                cout << "*";
            }
            cout<<endl;
        }else{
            for (int j=1 ; j<=w; j++) {
                if (j%2==1) {
                    cout<<"*";
                } else {
                    cout<<0;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
