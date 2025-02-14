#include <iostream>
using namespace std;
// f(x)=x^2+5
int sum(int a, int b);
int main()
{
    int x, y;
    cout << "Enter the first number :"<< endl;
    cin >> x;
    cout << "Enter the Scond Number:"<< endl;
    cin >> y;
    cout << "The sum of two number are :" << sum(x,y);
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
