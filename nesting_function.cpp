//nesting functions
//checking if input isbinary and creating 1st composite of it
#include <iostream>
#include <string>
using namespace std;
  class cond2 {
    private:
    string n;
    void binary(void);
    public:
    void enter(void);
    void composite(void);
    void display(void);
  };
 
 void cond2 :: enter(void){
        cout<<"enter a number: \n";
        cin>>n;
 }
void cond2 :: binary(void){
    for(int i=0;i<n.length(); i++){
        if(n.at(i)!= '0' &&  n.at(i)!= '1'){
        cout<<"Character not valid at index ";
        exit(0);}
    }
}
 void cond2 :: composite(void){
        binary();
        for(int i=0;i<n.length(); i++){
        if(n.at(i)== '0' )
        n.at(i)='1';
        else
        n.at(i)='0';
        }
    }
void cond2 :: display(void){
   for(int i=0;i<n.length(); i++)
    { cout<<n.at(i);  }}

int main(){
    cond2 a;
    a.enter();
   // a.binary();
    a.composite();    
    a.display();
    return 0;
}   