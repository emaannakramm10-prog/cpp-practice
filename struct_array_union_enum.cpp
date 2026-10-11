#include <iostream>
using namespace std;
struct Employee
{
    string name;
    float salary;
};

int main()
{
    Employee E1 = {"Emaan Akram", 1435.06};
    Employee E2 = {"Elizabeth", 354.05};
    cout << "Employee's name is " << E1.name << endl
         << "Employee's salary is " << E1.salary<<endl;
    cout << "Employee's name is " << E2.name << endl
         << "Employee's salary is " << E2.salary;

    return 0;
}