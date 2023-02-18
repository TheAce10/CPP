#include <iostream>
using namespace std;

long hms_to_secs(int hrs, int min, int sec) {
    long total_seconds = hrs * 3600 + min * 60 + sec;
    return total_seconds;
}

int main() {
    int hours, minutes, seconds;
    char a;
    while (true) { //Loop to repeat block of code
        cout << "Enter a time value(format HH:MM:SS)\n";
        cin >> hours >> a >> minutes >> a >> seconds;
        cout << hours << minutes << seconds;
        if (!isdigit(hours) == true) {
            break;
        }
        long total_seconds = hms_to_secs(hours, minutes, seconds);
        cout <<"\n"<<hours<<"h:"<<minutes<< "m:"<<seconds<<"s "<< "is equivalent to : " << total_seconds << "sec(s)\n"<<endl;
    }
    return 0;
}