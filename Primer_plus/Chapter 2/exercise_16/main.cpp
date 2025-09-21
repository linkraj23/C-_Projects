#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar
{
    char candy_name[20];
    double candy_weight;
    int candy_calories;
};

int main() 
{
    CandyBar * ps = new CandyBar[3] {{"Mocha Munch", 2.3, 350}, {"kit-kat", 3.5, 200}, {"Dairy Milk", 4.5, 400}};

    cout << ps[0].candy_name << endl;
    cout << ps[0].candy_weight << endl;
    cout << ps[0].candy_calories << endl;
    
    cout << ps[1].candy_name << endl;
    cout << ps[1].candy_weight << endl;
    cout << ps[1].candy_calories << endl;
    
    cout << ps[2].candy_name << endl;
    cout << ps[2].candy_weight << endl;
    cout << ps[2].candy_calories << endl;
    delete ps;

    return 0;
}

