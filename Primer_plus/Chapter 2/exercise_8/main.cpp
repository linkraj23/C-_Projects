#include <iostream>
using namespace std;

int main()
{
    cout << "What is your name? ";
    char first_name[15];
    cin.getline(first_name, 15);

    cout << "What is your last name? ";
    string last_name;
    cin >> last_name;

    cout << "What letter grade do you deserve? ";
    char grade;
    cin >> grade;
    grade++;

    cout << "What is your age? ";
    int age;
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age;

    return 0;
}
