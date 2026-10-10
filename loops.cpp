#include <iostream>
using namespace std;
int main()
{
    // for loop
    for (int i = 1; i <= 5; i++)
    {
        cout << " number " << i << " is in your display " << endl;
        cout << i;
    }
    cout << "\nbelow mentioned is do-while loop\n";
    int k = 1;
    do
    {
        cout << " number " << k << " is in your display: " << endl;
        k++;
    } while (k <= 5);
}
