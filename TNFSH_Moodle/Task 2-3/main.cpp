#include <iostream>
using namespace std;
int main(){
    double answer=0;
    double x;
    for (int i=1;i<=3;i++){
    cin >> x;
    if (x<60){
        x*=1.25;
    }
    if ((x<0)||(x>100)){
        cout<<"ReCheckScores\n";
        return 0;
    }
    answer+=x;
    }
    if (answer/3<60){
        cout<<"PleaseGoToDieOneDie\n";
        return 0;
    }
    cout<<"Hmm\n";
    return 0;
}
