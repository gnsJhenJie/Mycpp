//
//  main.cpp
//  task 4-2
//
//  Created by gnsJhenJie on 2017/11/1.
//  Copyright gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace::std;
int main(int argc, const char * argv[]) {
    double m,n,a;
    cin >> m >>n;
    a=m;
    for (a ; a<=n; a=a+1) {
        cout << m <<"C="<<m*1.8+32<<"F"<<endl;
        m++;
    }
    return 0;
}
