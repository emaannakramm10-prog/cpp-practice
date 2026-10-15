#include <iostream>
using namespace std;

    int factorial(int a){
        if(a<=1){
            return a=1;
        }
    return a*factorial(a-1);
    }
int main(){
    int n;
    cout<<"Enter a number: \n";
    cout<<"Factorial of your number "<<n<<" will be: "<<factorial(n);
    return 0;
}