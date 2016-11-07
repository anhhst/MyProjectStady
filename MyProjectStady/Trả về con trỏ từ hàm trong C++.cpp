#include <iostream>
#include <ctime>
#include <stdlib.h>   
using namespace std;

// phan dinh nghia ham de tao va tra ve cac so ngau nhien.
int * soNgauNhien()
{
	// Phải là một mảng static
	static int  r[10];
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		r[i] = rand();
		cout << r[i] << endl;
	}

	return r;
}

// ham main de goi phan dinh nghia ham tren.
//int main()
//{
//	// mot con tro tro toi mot so nguyen.
//	int *p;
//
//	p = soNgauNhien();
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Gia tri cua *(p + " << i << ") : ";
//		cout << *(p + i) << endl;
//	}
//	cin.get();
//	return 0;
//}