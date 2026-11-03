#include <iostream>
using namespace std;
    class sells{
        public:
        //non-static=not reusable by diff members
        string name;
        int id;
        //static=reusable by all members
        static int order_number;
        //constructor=allocates memory space
        sells(string n,int i){
            name=n;
            id=i;
            order_number++;
        }
        void display(){
        cout<<"order name is: "<<name<<endl;
        cout<<"order id is: "<<id<<endl;
        cout<<"order number is: "<<order_number<<endl;
        }
    };
    int sells:: order_number=0;
int main(){
    sells e344n("Emaan",1010),m4r1u3("Marium",44);
    e344n.display();
    m4r1u3.display();
    return 0;
}
