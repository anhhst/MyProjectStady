#include <iostream>
using namespace std;
class CReptile
{
public:
	virtual char* getClassName(int sign)
	{
		if (sign > 0)
		{
			return "CReptile";
		}
	}
};

class CSnake : public CReptile
{
public:
	char* getClassName(int sign) 
	{
		if (sign > 0)
		{
			return "CSnake";
		}
	}
};

//int main() {
//	CReptile* csnake = new CSnake;
//	cout << csnake->getClassName(1);
//	cin.get();
//	return 0;
//}