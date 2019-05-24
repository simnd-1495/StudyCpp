#include <iostream>
#include <iomanip>	// for std::setprecision()
using namespace std;

int main()
{
    int x = 0;
    int y = 2;
    int z = (++x, ++y);
    cout << "z = " << z;
    int a = ++x, ++y;
    cout << "a = " << a;
    return 0:
}