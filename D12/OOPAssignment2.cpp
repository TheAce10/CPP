#include <iostream>
#include <string>

using namespace std;

int main() {
    int a,b,c,d,i=0;
    cout << "Time\n";

    while(i<4){
        // if(i=0){
        switch (i)
        {
        case 1:
            /* code */
            i++;
            cin >>a;
            cout <<a;
            
            break;
        case 2:
            i++;
            cin >>b;
            cout <<a<<":"<<b<< ":";
            
        case 3:
            i++;
            cin >> c;
            cout <<a<<":"<<b<< ":"<<c;
            
            break;
        default:
            break;
        }
        continue; 
    }
    return 0;
}