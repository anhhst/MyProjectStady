#include <iostream>
int cong(int, int);
int cong(const int *, int);
//int main() {
//	std::cout << cong(20, 40) << std::endl;
//
//	int so = 2;
//	int *sptSo = &so;
//	std::cout << cong(sptSo, 4) << std::endl;
//	std::cin.get();
//}
int cong(int a, int b) {
	return a + b;
}
int cong(const int *a, int b) {
	return *a + b;
}