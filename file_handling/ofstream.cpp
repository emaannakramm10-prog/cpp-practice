#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream obj;//opens file
    obj.open("ofstream.txt");//create if not
    cout<<"My name is Emaan.\nI'm 17 yearws old.";//can write into it
    obj.close();//releases resource
    return 0;
}