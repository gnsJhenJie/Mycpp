//gnsJhenJie 2018 Copyrights.
#include <bits/stdc++.h>
using namespace std;
int max (int a[100],int n){
    int max=a[0];
    for (int i=0;i<n;i++){
        if (a[i]>max){
            max =a[i];
        }
    }
    return max;
}

int main(){
    int n;
    cin >>n;
    int a[100];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << max(a,n)<<endl;
    return 0;
}
