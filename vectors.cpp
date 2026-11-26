#include <iostream>
#include <vector>
using namespace std;

int main()
{
    	// defining a vector
	vector<int> id = {1000, 2000, 3000};
	// calling it
	cout << id[0];
	// vector's special for loop
	for (int i : id)
		cout << i << endl;
	// no# of data in it
	cout << "\nsize of our vector is: " << id.size();
	// adding number at the end
	id.push_back(40000);

	return 0;
}