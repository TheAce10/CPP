int main () {
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
    break;
    };
    }
    cout << "Fibonacci sequence to 5 is " << seq;
return 0;
}