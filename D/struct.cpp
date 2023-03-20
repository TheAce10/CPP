#include <iostream>
#include <string>
using namespace std;
int main() {
struct carss {
  string brand;
  string model;
  int year;
};
  // Create a car structure and store it in yourCar;
  carss yourCar;
  yourCar.brand = "BMW";
  yourCar.model = "X5";
  
  // Create another car structure and store it in yourCar2;
  carss yourCar2;
  yourCar2.brand = "Ford";
  yourCar2.model = "Mustang";
 
  // Print the structure members
  cout << yourCar.brand << " " << yourCar.model << " " << yourCar.year << "\n";
  cout << yourCar2.brand << " " << yourCar2.model << " " << yourCar2.year << "\n";
    return 0;
}
