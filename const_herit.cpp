#include <iostream>
using namespace std;
class person
{

public:
    person()
    {
        cout << "this is parent class constructor\n";
    }
};
class student : public person
{
public:
    student()
    {
        cout << "this is child class constructor\n";
    }
};

int main()
{

}