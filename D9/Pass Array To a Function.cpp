#include <iostream>

using namespace std;

void myFunction(int Num[7]) {
  for (int i = 0; i < 5; i++) {
    cout << Num[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
    return 0;
}