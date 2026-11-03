#include <iostream>
using namespace std;
class rectangle
{
    private:
    float lenght,width;
public:
    float area(float l,float w){
         lenght=l;
         width=w;
         return lenght*width;        
        }};
int main()
{
    float a,b;
rectangle cal1;
cout<<"Enter the lenght: \n";
cin>>a;
cout<<"Enter width: \n";
cin>>b;
cout<<"Area of the rectangle is "<<cal1.area(a,b)<<" meter sq";
}
