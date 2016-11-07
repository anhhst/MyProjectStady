#include <iostream>
 
using namespace std;
 
//void main()
//{
//	int stdio = 5;
//	//[=]	Được phép sử dụng các biến bên ngoài, nhưng là dạng sao chép giá trị của biến đó(by value)
//	auto f = [=]() {
//		
//		cout << "lambda ";
//		cout << "expression"<<endl;
//		cout << stdio << endl;
//		return 1;
//	};
//	//[&]	Được phép sử dụng chính biến đó (by reference)
//	auto c = [&]() {
//		stdio = 3;
//		cout << "lambda ";
//		cout << "expression" << endl;
//		cout << stdio << endl;
//		return 1;
//	};
//	int x = 4;
//	
//	cout<<f();
//	cin.get();
//}