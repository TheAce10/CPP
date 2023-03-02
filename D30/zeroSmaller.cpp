#include <iostream>

using namespace std;

void zeroSmaller(int, int);


void zeroSmaller(int a, int b){
    (a>b)?a=0:b=0;
    char w= (a=0)?'a':'b';
    cout<< "min =" << w;
}
