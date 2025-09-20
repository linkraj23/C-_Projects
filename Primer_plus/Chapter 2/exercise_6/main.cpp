#include <iostream>
using namespace std;

int main()
{
    cout << "How many kilometers have you driven: ";
    int km_driven;
    cin >> km_driven;

    cout << "How many liters of petrol have you used: ";
    float petrol;
    cin >> petrol;

    float total_driven = (float)km_driven / petrol;

    cout << "Total car driven " << total_driven << "kmpl." << endl;

    return 0;
    
}