#include <iostream>
#include <conio.h>
using namespace std;



void operate(float a, float b, float (*func)(float,float)){
    
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