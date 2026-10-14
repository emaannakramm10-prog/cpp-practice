#include <iostream>
using namespace std;
class students
    {
    
    public:
        int id;
        string name;

    void intputt(){
        cin>>id;
        cin>>name;
    }
    void display(){
        cout<<id;
        cout<<name;
    }
    };
int main(){
    students s1;
       s1.intputt();
    s1.display();

   
    
    return 0;
}