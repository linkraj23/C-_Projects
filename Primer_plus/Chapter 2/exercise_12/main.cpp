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
    CandyBar snack {"Mocha Munch", 2.3, 350};

    cout << snack.candy_name << "\n";
    cout << snack.candy_weight << "\n";
    cout << snack.candy_calories << endl;

    return 0;

    
}