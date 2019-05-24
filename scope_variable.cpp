#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    if(a < 10){
        int a = 10;
        ++a;
        cout << a << endl;
    }
    cout << a << endl;
    return 0;
}
