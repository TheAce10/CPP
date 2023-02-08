#include <iostream>
#include <string>

using namespace std;
void convert(float n);
int main() {
    float a;
    cout << "Enter height(cm)\t";
    cin >> a;
    convert(a);
    return 0;
}

void convert(float n){
    float inches;
    int feet;
inches = n/2.5;
feet= inches / 12;
inches= (inches/12)-feet;
cout << "Your height is "<<feet<<" ft "<<inches <<" inch(es)";
}