/*
The tm strucute holds the data and time in a specific format. The structure is defined in <ctime> header file.
struct tm {
    int tm_sec; // seconds of minutes from 0 to 61
    int tm_min; // minutes of hour from 0 to 59
    int tm_hour; // hours of day from 0 to 24
    int tm_mday; // day of month from 1 to 31
    int tm_mon; // month of year from 0 to 11
    int tm_year; // year since 1900
    int tm_wday; // days since sunday
    int tm_yday; // days since January 1st
    int tm_isdst; // hours of daylight savings time
}

 */

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now = time(0);
    cout << "Seconds passed from 1 Jan 1970: " << now << endl;

    char *dateAndTime = ctime(&now);
    cout << "Local Date and time: " << dateAndTime << endl;

    tm *gmtm = gmtime(&now);
    dateAndTime = asctime(gmtm);
    cout << "UTC Date and time: " << dateAndTime << endl;

    // Now showing the local time using the tm struct
    tm *ltm = localtime(&now);
    cout << "Year: " << 1900 + ltm->tm_year << endl;
    cout << "Month: " << 1 + ltm->tm_mon << endl;
    cout << "Day: " << ltm->tm_mday << endl;
    cout << "Time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
    cout << "Day of week: " << ltm->tm_wday << endl;
    cout << "Day of year: " << ltm->tm_yday << endl;
    return 0;
}