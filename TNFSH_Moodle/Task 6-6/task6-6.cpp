//
//  main.cpp
//  Task 4-6
//
//  Created by gnsJhenJie on 2017/12/13.
//  Copyright © 2017年 gnsJhenJie. All rights reserved.
//

#include<iostream>
using namespace std;
int main(){
    int tmp = 0,max,min,tmpp,rmin,rmax;
    while(cin >>min>>max){
    int maxlength=0;
        rmin=min;
        rmax=max;
        if (min>max){
            tmpp=min;
            min=max;
            max=tmpp;
        }
  
    for ( ;min<=max;min+=1){
    int length=0;
    tmp=min;
    while (tmp !=1) {
        if (tmp%2==1){
            tmp=3*tmp+1;
        }else{
            tmp/=2;
        }
        length++;
    }
    length++;
        if (length>maxlength) {
            maxlength=length;
        }
    }
    cout <<rmin<<" "<<rmax<<" "<<maxlength<<endl;
    }
    return 0;
}

