#include <bits/stdc++.h>
using namespace std;
bool isprime(int x){
    int b=0;
    for (int i=1;i<=x;i++) {
        if ((x%i==0)&&(i!=1)&&(i!=x)) {
            
        }else {
            b++;
        }
    }
    if (b==x) {
        return true;
    }else{
        return false;
    }
    
}

int main(){
    int x;
    cin >>x;
    cout <<isprime(x)<<endl;
    return 0;
}
