#include <iostream>
using namespace std;

struct pizza
{
    string company_name;
    float diameter_pizza;
    float weight_pizza;
};


int main()
{
    pizza p1;
    cout << "Welcome to pizza analysis tool: " << endl;
    cout << "Enter the pizza company name: ";
    getline(cin, p1.company_name);

    cout << "Enter the pizza diameter: ";
    cin >> p1.diameter_pizza;

    cout << "Enter the pizza weight: ";
    cin >> p1.weight_pizza;

    cout << p1.company_name << "\n" << p1.diameter_pizza << "\n" << p1.weight_pizza << endl;

    return 0;

}