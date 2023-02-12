#include <iostream>
using namespace std;

long hms_to_secs(int hours, int minutes, int seconds) {
    long total_seconds = hours * 3600 + minutes * 60 + seconds;
    return total_seconds;
}

int main() {
    int hours, minutes, seconds;
    char colon;
    while (true) {
        cout << "Enter a time value in format HH:MM:SS (or enter -1 to exit): ";
        cin >> hours >> colon >> minutes >> colon >> seconds;
        if (hours == -1) {
            break;
        }
        long total_seconds = hms_to_secs(hours, minutes, seconds);
        cout << "The equivalent time in seconds is: " << total_seconds << endl;
    }
    return 0;
}