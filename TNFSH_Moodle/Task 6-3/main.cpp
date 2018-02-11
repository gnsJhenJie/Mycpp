#include<iostream>
using namespace std;
int main(){
    int min,max,goal,count=0;
    cin >> min >> max >> goal ;
    bool getgoal=false;
    int guessnum;
    while (getgoal==false){
        //int guessnum;
        guessnum=(max+min)/2;
        count++;
        if (guessnum==goal){
            getgoal=true;
        }else{
            cout <<count<<": "<<guessnum<<endl;
            if(guessnum>goal){
                max=guessnum-1;
            }else{
                min=guessnum+1;
            }
        }
    }
    cout << count <<": "<<guessnum<<endl;
    return 0;
}
