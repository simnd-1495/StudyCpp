#include <iostream>
using namespace std;

int main()
{
int a{ 3 }, b{ 2 }, c{ 4 }, max;

	// Khó hiểu, dễ sai => Không nên
	max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	cout << "Max = " << max << endl;

	// Dễ hiểu => Nên
	max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	cout << "Max = " << max << endl; 

	return 0;
}