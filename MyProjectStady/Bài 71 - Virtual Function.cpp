#include <iostream>
using namespace std;

class PhongTom {
public:
	virtual void Skill_1() { cout << "Phong Tom Dam: Mot phat chet luon\n"; }
	virtual void Skill_2() { cout << "Phong Tom Song phi: 2 cu\n"; }
	void jump() { cout << "Nhay Phong Tom\n"; }
};

class CungThu :public PhongTom {
public:
	void Skill_1() { cout << "Cung: Bach phat bach trung\n"; }
	void jump() { cout << "Nhay CungThu\n"; }
};

class GayThu :public PhongTom {
public:
	void Skill_2() { cout << "Gay: Mua kungfu";}
};
//int main()
//{
//	CungThu ct;
//	GayThu gt;
//	PhongTom * pt = &ct;
//	/*pt->Skill_1();
//	pt->Skill_2();
//	pt->jump();*/
//	ct.Skill_1();
//	ct.Skill_2();
//	ct.jump();
//	cin.get();
//	return 0;
//}