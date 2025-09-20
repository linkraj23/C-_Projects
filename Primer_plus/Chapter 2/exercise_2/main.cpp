#include <iostream>
using namespace std;

int main()
{
    float height_feet;
    float height_inches;
    int weight_pounds;

    cout << "Enter your height in feet and inches: ";
    cin >> height_feet;
    cout << "Enter your weight in pounds: ";
    cin >> weight_pounds;

    height_inches = height_feet * 12;
    float height_meters = height_inches * 0.0254;
    float weight_kilos = (float) weight_pounds / 2.2;
    float bmi = weight_kilos / (height_meters * height_meters);

    cout << "Your weight in kilos: " << weight_kilos << endl;
    cout << "Your height in meters: " << height_meters << endl;
    cout << "BMI of your body is: " << bmi << endl;

    return 0;
}