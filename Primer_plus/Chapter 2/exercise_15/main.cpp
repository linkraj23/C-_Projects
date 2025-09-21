#include <iostream>
#include <cstring>
using namespace std;

struct pizza
{
    double pizza_diameter;
    char company_name[20];
    double pizza_weight;
};

int main()
{
    pizza * ps = new pizza;

    cout << "Enter the diameter of the pizza: ";
    cin >> ps->pizza_diameter;
    cin.get();
    
    cout << "Enter the pizza company name: ";
    cin.get((*ps).company_name, 20);

    cout << "Enter the pizza weight: ";
    cin >> ps->pizza_weight;

    cout << ps->pizza_diameter << endl;
    cout << ps->company_name << endl;
    cout << ps->pizza_weight << endl;

    delete ps;

    return 0;
}