#include <iostream>
#include <climits>

using namespace std;

int main()
{
    const int arc_degrees = 60;
    const short arc_minute = 60;

    float deg, min, sec;

    cout << "Enter a latitude in degrees, minutes, and seconds: \n";
    cout << "First, enter the degrees: ";
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;

    float decimal_degree = deg + (min/arc_degrees) + (sec/(arc_minute * arc_minute));

    cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = " << decimal_degree << " degrees.\n";

    return 0;

    
}