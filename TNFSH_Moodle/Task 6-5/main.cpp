#include<iostream>
using namespace std;
int main(){
    int n; cin >>n;
    int length=0;
    while (n !=1) {
        if (n%2==1){
            n=3*n+1;
        }else{
            n/=2;
        }
        length++;
    }
    length++;
    cout <<length<<endl;
    return 0;
}
