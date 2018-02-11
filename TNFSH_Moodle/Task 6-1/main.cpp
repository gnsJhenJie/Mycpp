#include<iostream>

using namespace std;
int main(){
    long long int num,enter,result=0,enternum,temp;
    long double entered=1;
    bool goal=false;
    //cin >>num;
    entered=0;
    while(goal==false){
        cin >> enter;
        if(goal==false){
            result+=enter;
        }
        entered++;
        if ((result/70000)>=1&&(goal==false)){
            enternum=entered;
            temp=result;
            goal=true;
        }
    }
    cout << enternum <<endl;
    cout << temp<<endl;
    return 0;
}
