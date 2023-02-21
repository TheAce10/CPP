#include <iostream>
using namespace std;
// function to convert time to equivalent in  seconds
long hms_to_secs(int hrs, int min, int sec) {
    long total_seconds = hrs * 3600 + min * 60 + sec;
    return total_seconds;
}

int main() {
    int hours, minutes, seconds;
    char a;
    while (true) { //Loop through block of code repeatedly
        cout << "Enter a time value(format HH:MM:SS)\n";
        // 
        cin >> hours >> a >> minutes >> a >> seconds;
        long equivSeconds = hms_to_secs(hours, minutes, seconds);
        cout <<"\n"<<hours<<"h:"<<minutes<< "m:"<<seconds<<"s "<< "is equivalent to : " << equivSeconds 
        << "sec(s)\n"<<endl;
    }
    return 0;
}  