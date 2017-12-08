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
    
    if (a>100|b>100|c>100|a<0|b<0|c<0){
        cout << "ReCheckScores" <<endl;
    }
    else{
        if (a<60){
        a=a*1.25;
    }
    if (b<60) {
        b=b*1.25;
    }
    if (c<60) {
        c=c*1.25;
    }
    avg=(a+b+c)/3;
    if (avg<60) {
        cout << "PleaseGoToDieOneDie";
    } else {
        cout << "Hmm";
    }
    }
        
}
