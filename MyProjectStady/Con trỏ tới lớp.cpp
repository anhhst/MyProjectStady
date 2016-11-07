#include <iostream>
 
using namespace std;

class Box
{
   public:
      // phan dinh nghia Constructor
      Box(double dai=1.0, double rong=1.0, double cao=1.0)
      {
         cout <<"Constructor duoc goi." << endl;
         chieudai = dai;
         chieurong = rong;
         chieucao = cao;
      }
      double theTich()
      {
         return chieudai * chieurong * chieucao;
      }
   private:
      double chieudai;     // chieu dai cua mot box
      double chieurong;    // chieu rong cua mot box
      double chieucao;     // chieu cao cua mot box
};


//int main(void)
//{
//   Box Box1(2.4, 4.2, 2.2);    // khai bao box1
//   Box Box2(4.5, 2.0, 3.2);    // khai bao box2
//   Box *controBox;                // khai bao con tro toi mot class.
//
//   // luu giu dia chi cua doi tuong dau tien
//   controBox = &Box1;
//
//   // bay gio thu truy cap mot thanh vien boi su dung toan tu truy cap thanh vien
//   cout << "The tich cua Box1 la: " << controBox->theTich() << endl;
//
//   // luu giu dia chi cua doi tuong thu hai
//   controBox = &Box2;
//
//   // bay gio thu truy cap mot thanh vien boi su dung toan tu truy cap thanh vien
//   cout << "The tich cua Box2 la: " << controBox->theTich() << endl;
//  
//   return 0;
//}