#include <iostream>
#include <string>

// Question 1
// long int sum_natural(int n){
//     int sum1= 0;
//     for (int i=1; i < n; i++){
//         sum1+= sum1++; //sum1+= i
//     }
//     return sum1;
// }
using namespace std;
// int main() {
//     int a;
//     cout <<"Sum of Natural numbers to the nth term\n" << "Enter a nth term for your sum: \t" ;
//     cin >> a;
//     cout << "Sum of natural numbers up to"<<a << ":"<<sum_natural(a);
//     return 0;
// }

// void convert(float n){
//     float inches, feet;
// inches = n/2.5;
// feet= inches % 12;
// inches= (inches/12)-feet;
// cout << "Your height is"<<feet<<"ft"<<inches <<"inches";
// }

int main () {
    // float a;
    // cout << "Enter height(cm)\t";
    // cin >> a;
    // convert(a);
int aa,seq=0,j=0;
cout << "Fibonacci sequence\n Enter length for sequence\t";
    cin >>aa;
for(int i=0;i<=aa;i++){
    if (i=0){
        seq= 0;
    }
    else if (i=1){
        seq= 1;
    }
    else if (i>1){
    seq+=seq;
    }
    else {
cout<< "You entered a negative number";
    };
    }
cout << "Fibonacci sequence to 5 is " << seq;
return 0;
}