#include <iostream>

using namespace std;

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
void swapNums1(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
int main() {
    int a=1,b=2;
    cout << "a is " <<a;
    cout << "b is " <<b;
    swapNums(a,b);
    cout << "a is " <<a;
    cout << "b is " <<b;

    swapNums1(a,b);
    cout << "a is " <<a;
    cout << "b is " <<b;

    return 0;
}

/*Pass By Reference
In the examples from the previous page, we used normal variables when we passed parameters to a function. You can also pass a reference to the function. This can be useful when you need to change the value of the arguments*/