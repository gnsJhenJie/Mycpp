//
//  main.cpp
//  task 3-3
//
//  Created by gnsJhenJie on 2017/11/1.
//  Copyright gnsJhenJie. All rights reserved.
//

#include <iostream>

using namespace::std;
int main(int argc, const char * argv[]) {
    int time;
    cin >> time;
    if (time<0|time>10000) {
        cout << "Get out!!";
        return 0;
    }else if (time>1000){
        cout << "RIP!!";
        return 0;
    }
    switch (time) {
        case 0 ... 120 :
            cout << time*2.1 <<endl;
        case 121 ... 330 :
            cout << (time-120)*3.02+120*2.1 <<endl;
        case 331 ... 500 :
            cout << (time-330)*4.39+210*3.02+120*2.1<<endl;
        case 501 ... 700 :
            cout << (time-500)*4.97+170*4.39+210*3.02+120*2.1<<endl;
        case 701 ... 1000 :
            cout << (time-700)*5.63+200*4.97+170*4.39+210*3.02+120*2.1<<endl;
        default:
            break;
    }
    return 0;
}
