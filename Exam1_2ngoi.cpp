#include <iostream>
using namespace std;

int main()
{
	// count holds the current number to print
	int count = 1; // start at 1

	// Loop continually until we pass number 100
	while (count <= 100)
	{
		// if count is evenly divisible by 10, print a new line
		if (count % 2 == 0)
			cout << count << "\t"; // print the current number

		// if count is evenly divisible by 20, print a new line
		if (count % 10 == 0)
			cout << "\n";

		count = count + 1; // go to next number
	} // end of while
	return 0;
}