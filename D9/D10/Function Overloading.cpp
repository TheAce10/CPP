#include <iostream>

using namespace std;
int myFunction(int x);
float myFunction(float x);
double myFunction(double x, double y);

int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
    int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
    return 0;
}

/*Function Overloading
With function overloading, multiple functions can have the same name with different parameters:*/