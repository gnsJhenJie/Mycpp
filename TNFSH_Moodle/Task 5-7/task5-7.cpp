#include<iostream>
using namespace std;
int main(){
    int x;
    cin >>x;
    int strnum=2*x-1;
    int blank=-1;
    for (int i=1;i<=x;i++){
        blank++;
        for (int k=1;k<=blank;k++){
            cout <<" ";
        }
        for (int j=1;j<=strnum;j++){
            cout <<"*";
        }
        cout <<endl;
        strnum-=2;
    }

    int strnum2=3;
    int blank2=x-2;
    for (int l=3;l<=2*x-1;l+=2){
 
        for (int m=1;m<=blank2;m++){
            cout <<" ";
        }
        for (int n=1;n<=strnum2;n++){
            cout <<"*";
        }
        cout <<endl;
        blank2--;
        strnum2+=2;
    }
    return 0;
}
