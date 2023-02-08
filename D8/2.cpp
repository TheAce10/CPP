#include <iostream>
#include <string>

using namespace std;
// Question 1
long int sum_natural(int n){
    int sum1= 0;
    for (int i=1; i < n; i++){
        sum1+= sum1++; //sum1+= i
    }
    return sum1;
}

int main() {
    int a;
    cout <<"Sum of Natural numbers to the nth term\n" << "Enter a nth term for your sum: \t" ;
    cin >> a;
    cout << "Sum of natural numbers up to"<<a << ":"<<sum_natural(a);
    return 0;
}

