#include <iostream>
#include <string>


long int sum_natural(int n){
    int sum1= 0;
    for (int i=1; i < n; i++){
        sum1+= sum1++;
    }
    return sum1;
}
using namespace std;
int main() {
    int a;
    cout <<"Sum of Natural numbers to the nth term\n" << "Enter a nth term for your sum: \t" ;
    cin >> a;
    cout << "Sum of natural numbers to the "<<a<<"term is: "<<sum_natural(a);
    return 0;
}