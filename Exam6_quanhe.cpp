#include <iostream>
using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int main()
{
	cout << "Enter an integer: ";
	int x;
	cin >> x;

	cout << "Enter another integer: ";
	int y;
	cin >> y;

	if (x == y)
		cout << x << " == " << y << "\n";
	if (x != y)
		cout << x << " != " << y << "\n";
	if (x > y)
		cout << x << " > " << y << "\n";
	if (x < y)
		cout << x << " < " << y << "\n";
	if (x >= y)
		cout << x << " >= " << y << "\n";
	if (x <= y)
		cout << x << " <= " << y << "\n";

	return 0;
}