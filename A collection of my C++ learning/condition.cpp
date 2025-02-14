#include <iostream>
using namespace std;
int main()
{



     int age;
     cout << "Enter your age :\n";
     cin >> age;
    // if (age >= 18)
    // {
    //     cout << " You can vote\n";
    // }
    // else if (age > 0 && age < 18)
    // {
    //     cout << " YOU CANNOT VOTE\n";
    // }
    // else
    // {
    //     cout << " EROOR PLEASE ENTER CORRECT AGE\n";
    // }
    switch (age)
    {
    case 15:
        cout << " YOU ARE 15 YEARS OLD " << endl;
        break;
    case 12:
        cout << " You are 12 years old" << endl;
        break;
    case 16:
        cout << " You are 16 years old" << endl;
        break;

    default:
        break;
    }

    return 0;
}