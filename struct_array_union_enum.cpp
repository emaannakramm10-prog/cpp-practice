#include <iostream>
using namespace std;

int main()
{
    // struct stores hetreogeneous datatypes
    struct Employee
    {
        string name;
        float salary;
    };
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

    // union divides data
    union Input
    {
        int integer_input;
        float float_input;
    };
    Input person1;
    person1.integer_input = 14;
    cout << "Intially, Person 1 inputed: " << person1.integer_input << endl;
    person1.float_input = 14.05f;
    cout << "Afterrward, Person 1 entered: " << person1.float_input;
    // enum's gives index value to variables
    enum order_status {collected , shipped , delivered};
    order_status packet_1 = shipped;
    cout<<"\nYour order status number is: "<<packet_1;

}