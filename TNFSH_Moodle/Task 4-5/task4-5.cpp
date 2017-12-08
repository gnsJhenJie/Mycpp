//Copyright 2017 gnsJhenJie
//Task 4-5
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main (){
    using namespace  std;
long long int a,i;
 cin >> a;
i=2;
for (i=2 ; i<a ; i++ ) {
    if ( a % i == 0 ) {
        cout << i << endl;

    }
}
return 0 ;
}
