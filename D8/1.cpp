#include <iostream>
#include <string>

using namespace std;

int main () {
int a,temp,seq=0,j=0;
cout << "Fibonacci sequence\n Enter length for sequence\t";
cin >>a;
for(int i=0;i<a;i++){
    if (i=0){
        seq= 0;
        continue;
    }
    else if (i=1){
        seq= 1;
        continue;
    }
    else if (i>1){
    temp= seq;
    seq+=temp;
    continue;
    }}
//     else {
//     cout<< "You entered a negative number";
//     break;
//     };
// }
    cout << "Fibonacci sequence to "<<a<<" is " << seq;
return 0;
}