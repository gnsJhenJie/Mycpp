//gnsJhenJie 2018 Copyright.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    if (x<0){
        cout<<"M"<<endl;
        return 0;
    }
    if (x==0){
        cout<<"Z"<<endl;
        return 0;
    }
    if (x%2==0){
        cout<<"E"<<endl;
        return 0;
    }
    cout<<"O"<<endl;
    return 0;
}
