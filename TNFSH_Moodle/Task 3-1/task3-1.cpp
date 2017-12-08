//
//  main.cpp
//  Triangle ind
//
//  Created by gnsJhenJie on 2017/10/25.
//  Copyright gnsJhenJie. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <stdio.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    double a,b,c;
    double max,o,oo;
 
    double A;
    cin >>a >>b >>c;
    double s=(a+b+c)/2;
    if ((a>=b)&&(a>=c)) {  //a max
        max=a;
        o=b;
        oo=c;
    }else if ((b>=a)&&(b>=c)){  //b max
        max=b;
        o=a;
        oo=c;
    }else if ((c>=a)&&(c>=b)){  //c max
        max=c;
        o=a;
        oo=b;
    }else{
        cout <<"illegal"<<endl;
        cout <<"unavailable"<<endl;
        return 0;
    }
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    if (A>0){
        
    }else{
        cout <<"illegal"<<endl;
        cout <<"unavailable"<<endl;
    return 0;
    }
    double o2=o*o;
    double oo2=oo*oo;
    double ooo=o2+oo2;
    double max2=max*max;
    if(ooo>max2){
        cout <<"acute"<<endl;
        printf("%.4f",A);
    }else if (ooo==max2){
        cout <<"right"<<endl;
        printf("%.4f",A);
    }else if (ooo<max2){
        cout <<"obtuse"<<endl;
        printf("%.4f",A);
    }
    return 0;
}
