#include <iostream>
#include <vector>

using namespace std;

void stdio_doing(int n)
{
	n = n + 1;
	cout << n <<endl;
}

void for_each(vector<int> v1, void(*func)(int a))
{
	for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
	{
		func(*i);
	}
}

//void main()
//{
//	vector<int> v;
//	v.push_back(0);
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//
//	//Ví dụ 1 - Khai báo hàm sau đó truyền hàm vào hàm khác
//	for_each(v, stdio_doing);
//	
//	//Ví dụ 2 - Truyền thẳng biểu thức lambda (hàm) vào hàm khác
//	/*for_each(v, [](int a) {
//		a = a + 1;
//		cout << a;
//	});*/
//	cin.get();
//}