//
//  main.cpp
//  Dolfy in taxi
//
//  Created by gnsJhenJie on 2017/10/25.
//  Copyright gnsJhenJie. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdarg.h>
using namespace::std;
int main(int argc, const char * argv[]) {
    int a,b,c;
    cin >>a;
    b=a/500;
    c=a%500;

    //cout<<c<<endl;
    if (a<0){
        cout<<"go out"<<endl;
    }else if (a<1500){
        cout <<70;
    }else if (a>10000){
        cout <<"Sleeping school";
    }else if(c>0){
        cout<<(a-1500)/500*5+5+70;
    }
    else {
        cout<<(a-1500)/500*5+70;
    }

    return 0;
}
