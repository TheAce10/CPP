#include <iostream>
#include <conio.h>
using namespace std;

float subtract(float a,float b){
    return a-b;
}

void operate(float a, float b, float (*func)(float,float)){
    cout <<"we";
}

int main(){
    float (*pointt)(float,float)= subtract;
    char keyOnPress; int ASCIIequiv;
    while(true){
    keyOnPress= getch();
    ASCIIequiv= keyOnPress;
    cout<<"You pressed \""<<keyOnPress<<"\" which is "<<ASCIIequiv<< "in ASCII"<<endl;
    }


    return 0;
}