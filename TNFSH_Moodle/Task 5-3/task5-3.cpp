//Copyright 2017 gnsJhenJie.All right reserved.

#include <iostream>
using namespace std;
int main(){
    int n,tmp,tmpp,j=1;
    cin>>n;
    tmpp=n;
    for (int i=1;i<=n;i++){
        
        for( j=1;j<=(n-i);j++){
            cout<<0;
            tmp=n-j;
        }
        if (j==1){
            cout<<1;
        }
        for(int k=1;k<=tmp;k++){
        
            cout <<tmpp;
        }
        tmpp--;
        cout<<"\n";
        
    }
    return 0;
}
