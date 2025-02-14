#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name = "Milan ";
    cout << "The name of this person is :" << name << endl;
    cout << "The name of this person is :" << name.length() << endl;
    cout << "The name of this person is :" << name.substr(0, 2) << endl;
    cout << "The name of this person is :" << name.substr(1, 4) << endl;
    return 0;
}
