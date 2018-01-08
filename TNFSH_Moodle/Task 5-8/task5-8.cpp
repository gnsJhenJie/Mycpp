#include<iostream>
using namespace std;
int main(){
    int x;
    cin >>x;
    int result=0;
    int xx=x;
    for (int i=1;i<=x;i++){
        result=0;
        for (int j=1;j<=x-i+1;j++){
            result+=j;
        }
        cout <<"Sigma("<<xx<<")="<<result<<endl;
        xx--;
    }
}
