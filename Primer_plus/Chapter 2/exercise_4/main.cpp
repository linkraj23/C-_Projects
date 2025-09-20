#include <iostream>
using namespace std;

int main()
{
    const int min = 60;
    const int hours = 60 * (min);
    const int day = 24 * (hours);
     
    int sec;
    cout << "Enter the number of seconds: ";
    cin >> sec;

    int days_sec = sec/day;
    sec = sec % day;

    int hour_sec = sec/hours;
    sec = sec % hours;

    int min_sec = sec/min;
    sec = sec % min;

    
    

    cout << sec << " seconds = " << days_sec << " days, " << hour_sec << " hours, " << min_sec << " minutes, " << sec << " seconds";
    
    return 0;


}