/* system example : DIR */
/* system, NULL, EXIT_FAILURE */
//gnsJhenJie 2018 All rights reserved.

#include <bits/stdc++.h>

using namespace std;
int main (){  
    cout<<"Welcome to use cmd through the c++ file, Enter Command!\n";

    char abc[300];
    while(1){
        cin.get((abc), sizeof(abc));
        system(abc);
        memset( abc, 0, strlen(abc) );
        cin.ignore(INT_MAX,'\n');
        cout<<"Next Command:\n";
    }
    
}
