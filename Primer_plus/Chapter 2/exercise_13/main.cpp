#include <iostream>
using namespace std;

struct CandyBar
    {
        string candy_name;
        float candy_weight;
        int candy_calories;
    };

int main()
{
    CandyBar snack[3] {{"Mocha Munch", 2.3, 350}, {"kit-kat", 3.5, 200}, {"Dairy Milk", 4.5, 400}};

    cout << snack[0].candy_name << "\n";
    cout << snack[0].candy_weight << "\n";
    cout << snack[0].candy_calories << endl;

    cout << snack[1].candy_name << "\n";
    cout << snack[1].candy_weight << "\n";
    cout << snack[1].candy_calories << endl;

    cout << snack[2].candy_name << "\n";
    cout << snack[2].candy_weight << "\n";
    cout << snack[2].candy_calories << endl;

    return 0;

    
}