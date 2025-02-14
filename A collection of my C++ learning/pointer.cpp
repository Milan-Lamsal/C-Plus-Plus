//Pointers store address
#include <iostream>
using namespace std;
int main()
{
    int a = 44;
    int *ptra;
    ptra = &a;
    // cout<< ptra;
    // cout<<*ptra;
    cout << " The value of a is :" << a << endl;
    cout << " The value of a is :" << *ptra << endl;
    cout << " The address  of a is :" << &a << endl;
    cout << " The address of a is :" << ptra << endl;

    return 0;
}
