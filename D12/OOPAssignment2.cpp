#include <iostream>
#include <string>

using namespace std;
void hms_to_secs(){
    int i=1,hrs,min,sec;
    while(i<4){
        switch (i)
        {case 1:
            i++;
            cout << "Enter time o convert\n Format (hour:min:sec)\n" <<"Hours\n";
            cin >>hrs;cout << "\nMinutes\n";
            cout <<hrs<<"h:";
            break;
        case 2:
            i++;
            cin >>min;cout << "\nSeconds\n";
            cout <<hrs<<"h:"<<min<< "m:";
        case 3:
            i++;
            cin >> sec;
            break;
        default:
            break;}
        continue; }
    cout <<"\n"<<hrs<<"h:"<<min<< "m:"<<sec<<"s"<<" is equal to : "<<(hrs * 3600)+(min * 60) + sec <<"sec(s)\n\n";
}
int main() {
    int ask,ans;
    do {cout << "Convert time to seconds\n"<< "How can i help you today\n"<<"Enter 1 to continue, enter 2 to exit\n  ";
    cin >> ask;
    if(ask==1){
        hms_to_secs(); }}
    while (ask == 1);
    return 0;
}