#include <iostream>
using namespace std;
void hanoi(int n,int a,int b,int c){
    if (n==1){
        cout<<"hanoi("<<n<<","<<a<<","<<b<<","<<c<<"):\n";
        cout<<"Move disk from bar #"<<a<<" to bar #"<<c<<".\n";
        return;
    }else{
        cout<<"hanoi("<<n<<","<<a<<","<<b<<","<<c<<"):\n";
        hanoi(n-1,a,c,b);
        cout<<"hanoi("<<1<<","<<a<<","<<b<<","<<c<<"):\n";
        cout<<"Move disk from bar #"<<a<<" to bar #"<<c<<".\n";
        hanoi(n-1,b,a,c);
        return;
    }
}
int main(){
    int n;cin>>n;
    hanoi(n,1,2,3);
    return 0;
}
