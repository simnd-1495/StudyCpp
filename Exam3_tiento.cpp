#include <iostream>
using namespace std;

int main()
{
	int x = 69;
	int y = ++x;	// x is now equal to 70, and 70 is assigned to y

	cout << x << endl;	// x = 70
	cout << y << endl;	// y = 70
	return 0;
}