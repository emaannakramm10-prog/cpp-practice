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
	// adding number at the front
	cout << "\nsize of our vector after push_back is: " << id.size();
	// removing number from the end
	id.pop_back();
	cout << "\nsize of our vector after pop_back is: " << id.size() << endl;
	// displaying the first number
	cout << id.front() << endl;
	// displaying the last number
	cout << id.back() << endl;
	// displaying number on specific index
	cout << id.at(1) << endl;
	return 0;
}