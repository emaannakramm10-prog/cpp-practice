#include <iostream>
using namespace std;
int main()
{
// for loop
    cout << "beloe mention is for loop\n";
    for (int i = 1; i <= 5; i++)
    {
        cout << "enter number " << i << " in your display: " << endl;
    }
//while
    int j = 1;
    while (j <= 5)
    {
        cout << "enter nymber " << j << " in your display: " << endl;
        j++;
    }
//do-while
    cout << "\nbelow mentioned is do-while loop\n";
    int k = 1;
    do
    {
        cout << " number " << k << " is in your display: " << endl;
        k++;
    } while (k <= 5);
}
