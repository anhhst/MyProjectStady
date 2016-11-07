#include <iostream>
using namespace std;

// Khai bao bien static toan cuc x
static int x =10;

void foo()
{
	// Khai bao bien static cuc bo y
	static int y;

	cout << x;	// Co the truy xuat
	cout << y;	// Co the truy xuat
}

//int main()
//{
//	cout << x;	// Co the truy xuat
//	foo();	// Khong the truy xuat vi ngoai pham vi y
//	cin.get();
//	return 1;
//}