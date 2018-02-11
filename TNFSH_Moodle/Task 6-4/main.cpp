#include<iostream>
using namespace std;
int main(){
    long long int x;
    cin >>x;
    long long int n=10000000000,result=0;
    while (n>=0){
        if(n==0){
        result+=x;
        n=-100;
        }else{
        result+=x/n;
        x-=(x/n)*n;
        n/=10;
        
        }
    }
    cout <<result<<endl;
    return 0;
}
