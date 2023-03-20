#include <iostream>

using namespace std;

void aba(int* ,int n){
    nullptr;
}

int main(){
    int c[]={1,2,3,4,5};
    int len= sizeof(c)/sizeof(c[0]);
    aba(c,len);

    void* pnt= &c;

    // min
    int min= c[0];
    for(int i=0;i<len;i++){
        if (c[i]<min){
            min= c[i];
        }
    }
    cout<<len<<endl;
}