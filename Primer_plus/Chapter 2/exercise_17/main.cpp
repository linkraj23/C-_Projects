#include <iostream>
using namespace std;

int main()
{
    double a[3];
    cout << "Enter the first 40 meter dash time: ";
    cin >> a[0];
    cout << "Enter the second 40 meter dash time: ";
    cin >> a[1];
    cout << "Enter the third 40 meter dash time: ";
    cin >> a[2];
    double average_time = (a[0] + a[1] + a[2]) / 3;

    cout << "Average time for your runs is: " << average_time;

    return 0;
}