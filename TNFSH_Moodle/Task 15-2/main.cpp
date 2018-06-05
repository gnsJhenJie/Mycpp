#include <bits/stdc++.h>
using namespace std;
int f(int n){
    if (n<=0){
        return 0;
    }else if (n%2==1){
        return n + f(n-1);
    }else{
        return -n + f(n-1);
    }
}
int main(){
    int x;
    cin >> x;
    cout<<f(x)<<endl;
    return 0;
}`
