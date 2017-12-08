//
//  main.cpp
//  task 4-1
//
//  Created by gnsJhenJie on 2017/11/1.
//  Copyright gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace::std;
int main(int argc, const char * argv[]) {
    int n,s,a;
    cin >> n >>s;
    if (!(n<=45)|!(n>0)) {
        cout << "Error";
        
        return 0;
    }
    for (a=1; a<=n ; a=a+1) {
        cout << a <<": "<< s+1<<endl;
        s=s+1;
    }
    
    return 0;
}
