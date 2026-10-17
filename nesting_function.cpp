//nesting functions
//checking if input isbinary and creating 1st composite of it
#include <iostream>
using namespace std;
  class cond2 {
    public:
    string n;
    void enter();
    bool binary();
    void composite();

    
 
 void enter(){
        cout<<"enter a number: \n";
        cin>>n;
 }
bool binary(){
    for(int i=0;i<n.length(); i++){
        if(n.at(i)== '0' ||  n.at(i)== '1')
        cout<<"Character at index "<<i<<" is binary\n";
    }
}
 void composite(){
        binary();
         for(int i=0;i<n.length(); i++){
        if(n.at(i)== '0' )
        n.at(i)='1';
        else
        n.at(i)='0';
       
    }
     cout<<n;
} 
    
};

int main(){
    cond2 a;
    a.enter();
   // a.binary();
    a.composite();    
    return 0;
}