//
//  main.cpp
//  Complement 1-3
//
//  Created by gnsJhenJie on 2018/1/9.
//  Copyright © 2018年 gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x; cin >>x;
    int xx; xx = x;
    if (x%2==1) {
        for (int i=1 ; i<=x/2+1; i++) {
            for (int j=1 ; j<=i-1 ; j++) {
                cout << " ";
            }
            cout << "*";
            for (int j=1 ; j<=x-2*i; j++) {
                cout<<" ";
            }
            if ((i<=x/2)){
                cout << "*";
                
            }
            cout<<endl;
        }
    } else {
        for (int i=1 ; i<=x/2+1; i++) {
            for (int j=1 ; j<=i-1 ; j++) {
                cout << " ";
            }
            cout << "*";
            for (int j=1 ; j<=x-2*i+1; j++) {
                cout<<" ";
            }
            if ((i<=x/2)){
                cout << "*";
                
            }
            cout<<endl;
        }
    }

    for (int i=1 ; i<=x/2 ; i++) {
        for (int j=1 ; j<=x/2-i ; j++) {
            cout<<" ";
        }
        cout<<"*";
        for (int j=1 ; j<=2*i-1 ; j++) {
            cout <<" ";
        }
        cout <<"*";
        cout <<endl;
    }
    return 0;
}
