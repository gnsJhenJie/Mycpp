//
//  main.cpp
//  task 4-11
//
//  Created by gnsJhenJie on 2017/11/22.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int r,m,n,counter1,counter2;
    bool a=false;
    counter1=0;
    counter2=0;
    cin >>r>>m>>n;
    string result="";
    for (int i=0; i<=r; i+=1) {
        if (i==0) {
            result+="S";
        }else{
            if ((counter1%n==0)&&(counter1!=0)&&(a==true)&&(i%m==0)) {
                result+="X";
                a=false;
                counter1=0;
            }else if (i%m==0) {
                result+="T";
                counter1++;
                a=true;
            }
        }
    }
    if (result=="S") {
        cout <<"Bumbler government is not a necessary evil. It is just evil.";
        return 0;
    }
    cout <<result;
    return 0;
}
