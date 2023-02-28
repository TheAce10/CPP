#include <iostream>
using namespace std;

float subtract(float a,float b){
    return a-b;
}

void operate(float a, float b, float (*func)(float,float)){
    cout <<"we";
}

int main(){
    float (*pointt)(float,float)= subtract;
    return 0;
}