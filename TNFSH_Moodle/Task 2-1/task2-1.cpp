//
//  main.cpp
//  20171011MaxMin
//
//  Created by gnsJhenJie on 2017/10/11.
//  Copyright gnsJhenJie. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    double a , b , c ;
    double avg;
    cin >> a >> b >> c;
    avg=(a+b+c)/3;
    if (avg>100|avg<0){
        cout << "BS" <<endl;
        
    }

    else if (avg<60){
        cout << "FAIL" <<endl;
    }
    else {
        cout <<"PASS" <<endl;
    }

}
