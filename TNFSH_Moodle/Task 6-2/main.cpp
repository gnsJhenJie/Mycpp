#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
while(x%2==0){
    x/=2;
}
cout <<x<<endl;
return 0;
}
