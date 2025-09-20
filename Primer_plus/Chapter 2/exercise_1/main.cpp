#include <iostream>
using namespace std;

int main()
{
    int height;
    cout << "Enter the height: __";
    cin >> height;
    double height_feet = (double) height / 12;
    cout << "Your height in inches " << height << " and your height in feet " << height_feet << endl;
    return 0;
}