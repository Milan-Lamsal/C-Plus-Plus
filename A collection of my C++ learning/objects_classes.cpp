#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretePassword= sp;
    }

    void printDetails()
    {
        cout << "The name of the  my first employee is :" << this->name << " " << "and her Salary is :" << this->salary << endl; // creating methods like its like a function
    }
    void getSecretPassword(){
        cout<<"This is the secrete password of employee:"<<this->secretePassword;
    }

    private:
    int secretePassword;
    
    
};
int main()
{
    Employee em("Zoe braid solon", 1800, 98611);

    // em.name = " ZOE";
    // em.salary = 1500;
    // cout << "The name of the employee is :" << em.name << " " << "and her Salary is :" << em.salary << endl;
    em.printDetails();
    em.getSecretPassword();
    
    // cout<<em.secretePassword<<endl; gives error cus private cannot be access.
    return 0;
}