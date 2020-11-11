#include <iostream>
using namespace std;

//多继承
class Base1 {
public:
	Base1() {
		m_A = 100;
		m_S = 1;
	}
	int m_A;
	int m_S;
};
class Base2 {
public:
	Base2() {
		m_B = 200;
		m_S = 2;
	}
	int m_B;
	int m_S;
};
//语法 class 子类 ：继承方式 父类1, 继承方式 父类2...
class Son :public Base1, public Base2 {
public:
	Son() {
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};
void test01() {
	Son s;
	cout << sizeof(s) << endl;
	//cout << s.m_S << endl;//由于两个父类都有成员m_S 出现二义性
							//需用作用域加以区分
	cout << s.Base1::m_S << endl;
	cout << s.Base2::m_S << endl;
}
int main() {
	test01();
	return 0;
}