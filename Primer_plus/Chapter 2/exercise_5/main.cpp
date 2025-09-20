#include <iostream>
using namespace std;

int main()
{
    long long world_population;
    long long country_population;

    cout << "Enter the world's population: ";
    cin >> world_population;

    cout << "Enter the population of the country: ";
    cin >> country_population;

    double country_percent = (country_population * 100.0) / world_population;

    cout << "The population of the country is " << country_percent << " of the world population";



    return 0;
}