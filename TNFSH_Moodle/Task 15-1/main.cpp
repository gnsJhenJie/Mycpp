//gnsJhenJie 2018 Copyright. gnsJhenJie All Rights Reserved.
#include <bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
    int temp=1;
    int result;
    cout << "gcd("<<x<<","<<y<<")\n";
    if (x%y==0){
        cout<<y<<endl;
        return 0;
    }
    if (x%y==x){
        temp = x;
        x = y;
        y = temp;
    }else{
        result = x%y;
        temp = (x%y);
        x = y;
        y = temp;
    }
    gcd(x,y);
}
int main(){
    int x,y; cin >> x >> y;
    gcd(x,y);
    return 0;
}
