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
