
#include <iostream>
#include <string>
using namespace std;

class students
{
public:
    int id;
    string name;

    void inputt()
    {
        cin >> id;
        cin >> name;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    students s1;

    s1.inputt();
    s1.display();

    return 0;
}
