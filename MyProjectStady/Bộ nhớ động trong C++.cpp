#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class NhanVien
{
public:
	NhanVien() {
		cout << "Constructor duoc goi!" << endl;

	}
	~NhanVien() {
		cout << "Destructor duoc goi!" << endl;

	}
};

int main()
{
	NhanVien* mangNhanVien = new NhanVien[5];

	delete[] mangNhanVien; // xoa mang
	cin.get();
	return 0;
}

int main2()
{
	double abc = 3.21;
	double* contro = NULL; // con tro duoc khoi tao voi gia tri null
	contro = new double;   // yeu cau bo nho cho bien

	*contro = 1234.56;     // luu giu gia tri tai dia chi da duoc cap phat

	double* contro2 = contro;

	cout << "Gia tri cua contro la: " << *contro << endl;
	cout << "Gia tri cua contro2 la: " << *contro2 << endl;
	//delete contro;         // giai phong bo nho.

	contro = new double;
	*contro = 9876.54;
	cout << "Gia tri cua new contro  la: " << *contro << endl;
	cout << "Gia tri cua new contro2 la: " << *contro2 << endl;

	cin.get();
	return 0;
}
