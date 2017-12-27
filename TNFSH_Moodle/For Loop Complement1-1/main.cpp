//
//  main.cpp
//  For Loop Complement-1-1
//
//  Created by gnsJhenJie on 2017/12/27.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int number; cin >> number; int max=0;
    for (int i=1; i<=(number/2)+1; i++) {
        if ((number%i==0)&&(i>max)) {
            max=i;
        }
    }
    cout <<max<<endl;
    return 0;
}
