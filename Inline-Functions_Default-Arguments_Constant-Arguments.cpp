#include <iostream>
using namespace std;
 //inline functions's used when small lines of code. 
    //It repeats code inside of it
    inline int product(int a,int b){
        return a*b;
    }
int main(){
    int a=2,b=3;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;

    return 0;
}