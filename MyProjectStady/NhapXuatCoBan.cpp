#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//	string studentName;
//	float midtermScore, practiceScore, finalScore;
//	
//	cout << "Enter student name: ";
//	getline(cin, studentName);
//
//	cout << "Enter student scores: ";
//	cin >> midtermScore >> practiceScore >> finalScore;
//	//fflush(stdin);
//	cin.ignore();
//	cout << studentName << " Average score: "
//		<< midtermScore * 0.2 + practiceScore * 0.3 + finalScore * 0.5
//		<< endl;
//
//	
//	cin.get();
//	return 0;
//}

//Đối với thư viện stdio.h bị lỗi với gets thì ta chèn
//PHP Code :
//fflush(stdin);
//Sau hàm nhập số liền kề với gets sau nó
//
//Đối với thư viện iostrem.h bị lỗi cin.getline thì ta chèn
//PHP Code :
//cin.ignore();
//Sau hàm nhập số trước cin.getline() liền kề sau nó để xóa bộ đệm đi là ok;