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
         << "Employee's salary is " << E1.salary << endl;
    cout << "Employee's name is " << E2.name << endl
         << "Employee's salary is " << E2.salary;

    // array's store similar datatype
    string grade[5] = {"A+", "A", "B+", "C-", "F"};
    cout << "Emaan scored " << grade[0] << endl;
    cout << "Sara scored " << grade[1] << endl;
    cout << "Donald scored " << grade[2] << endl;
    cout << "Johny scored " << grade[3] << endl;
    cout << "Kaif scored " << grade[4] << endl;
}