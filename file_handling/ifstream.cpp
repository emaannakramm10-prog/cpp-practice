#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream obj;
obj.open("ofstream.txt");    
string word;
    obj>>word;
    while (obj>>word)
    {
        cout<<word<<endl;
    }
    if (!obj.is_open())
{
    cout << "File not found!";
}
    obj.close();
    return 0;
}