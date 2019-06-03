// #include <iostream>
// using namespace std;

// void test(int a)
// {
//     a = ++a;
// }

// void test1(int &a)
// {
//     a = ++a;
// }

// int main()
// {
//     int a =0;
//     test(a);
//     cout << a << endl;
//     test1(a);
//     cout << a << endl;
//     test(a);
//     cout << a << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// void printArray( int *array, int length)
// {
// 	// kiểm tra con trỏ null
// 	if (!array)
// 		return;

// 	for (int index = 0; index < length; ++index)
// 		array[index] += 1;
// }
// void test(int *temPtr)
// {
//     temPtr = nullptr;
// }
// int main()
// {
// 	int array[6] = { 6, 5, 4, 3, 2, 1 };
// 	printArray(array, 6);
//     // for (int index = 0; index < 6; ++index){
//     //     cout << array[index];
//     // }
//     int  b=5;
//     int *a = &b;
//     cout <<"a value: " << *a << endl;
//     test(a);
//     cout <<"a value: " << *a << endl;


// 	return 0;
// }
#include <iostream>
using namespace std;

// tempPtr là bản sao của ptr
void setToNull(int *tempPtr)
{
	// trỏ tempPtr đến một vị trí khác, không phải thay đổi giá trị tempPtr trỏ tới
	tempPtr = NULL;
}

int main()
{
	int value = 10;
    int b =5;
	int *ptr = &value;

	cout << *ptr << "\n"; // 10

	// tempPtr là bản sao của ptr
	setToNull(ptr);

	if (ptr)
		cout << ptr << "\n"; // 10
	else
		cout << " ptr is null";

	return 0;
}