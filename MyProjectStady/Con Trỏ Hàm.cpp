#include <iostream>
using namespace std;

//int thefunc1(int a)
//{
//	return a++;
//}
//
//
//int thefunc2(int a)
//{
//	return a + 3;
//}
//
//class Button
//{
//public:
//	Button()
//	{
//		func1 = &thefunc1;
//		func2 = &thefunc2;
//	}
//	~Button() {};
//	int Action(int a)
//	{
//		return (*func1)(a) + (*func2)(a);
//		//return func1(a) + func2(a);
//	}
//private:
//	int(*func1)(int);
//	int(*func2)(int);
//};
//
//
//int main()
//{
//	Button b1;
//	cout << b1.Action(3);
//	cin.get();
//	return 0;
//}

int thefunc()
{
	// DO SOMETHING
	return 1;
}
//int main()
//{
//	// con trỏ hàm giống như interface trong Java
//	int(*func)();
//	func = thefunc;
//	//Kết quả con trỏ
//	cout << "(*func)() " << (*func)() << endl;
//	cout << "func() " << func() << endl;
//
//	//Địa chỉ của con trỏ trỏ tới;
//	cout << "func " << func << endl;
//	cout << "*func " << *func << endl;
//	cin.get();
//}