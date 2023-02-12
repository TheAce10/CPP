#include <iostream>
#include <string>

using namespace std;

int hms_to_secs(){
    int i=1,hrs,min,sec;
    while(i<4){
        // if(i=0){
        switch (i)
        {
        case 1:
            /* code */
            i++;
            cin >>hrs;
            cout <<hrs<<":";
            
            break;
        case 2:
            i++;
            cin >>min;
            cout <<hrs<<":"<<min<< ":";
            
        case 3:
            i++;
            cin >> sec;
            cout <<hrs<<":"<<min<< ":"<<sec;
            
            break;
        default:
            break;
        }
        continue; 
    }
    return (hrs * 3600)+(min * 60) + sec;
}

int main() {
    int ask,ans;
    do {
    cout << "Convert time to seconds\n"<< "How can i help you today\n"<<"Press 1 to continue press 2 to exit\n  ";
    cin >> ask;
    if(ask=1){
        ans=hms_to_secs();
    }
    }
    while (ask = 1);

     
    

    
    return 0;
}