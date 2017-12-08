//Copyright 2017 gnsJhenJie
//Task 4-4
//

using namespace ::std;
#include <iostream>
#include <stdio.h>
int main(){
    long long int a,b,c,result;
    cin >>a ;
    if (a==0) {
        cout <<1;
        return 0;
}
    result=1;
    c=0;
    for(b=1;b<=a;b=b+1){
        c=c+1;
        result=result*c;
    }

    cout <<result<<endl;
}
