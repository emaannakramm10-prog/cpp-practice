#include <iostream>
using namespace std;
    class number{
     private:
     int a,b,c;
     public:
     int d,e;
     void set_data(int a1,int b1 , int c1){
        a=a1;
        b=b1;
        c=c1;
     }
     void display(){
        cout<<"\nthe number a is: "<<a;
        cout<<"\nthe number b is: "<<b;
        cout<<"\nthe number c is: "<<c;
        cout<<"\nthe number d is: "<<d;
        cout<<"\nthe number e is: "<<e;
     }
    };
int main(){
    
    return 0;}