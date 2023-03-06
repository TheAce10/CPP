#include <iostream>
#include <conio.h>
using namespace std;

void swap(int&, int&);

int main(){
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";
  swap(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";
}

void swap(int& x, int& y){
    int z = x;
    x = y;
    y = z;

}
