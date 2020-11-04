#include <iostream>
using namespace std;
//���������
//1.+���������
//1).ͨ����Ա��������
class A {
public:
	int m_A;
	int m_B;
	A operator+(A& a) {
		A temp;
		temp.m_A = this->m_A + a.m_A;
		temp.m_B = this->m_B + a.m_B;
		return temp;
	}
};
void test01() {
	A a1;
	A a2;
	a1.m_A = 10;
	a1.m_B = 10;
	a2.m_A = 10;
	a2.m_B = 10;

	A a3 = a1 + a2;//��������a3 = a1.operator+(a2);

	cout << a3.m_A << " " << a3.m_B << endl;
}
//2).ͨ��ȫ�ֺ�������
class B {
public:
	int m_A;
	int m_B;
};
B operator+(B &a1,B &a2) {
	B temp;
	temp.m_A = a1.m_A + a2.m_A;
	temp.m_B = a1.m_B + a2.m_B;
	return temp;
}
//2.1).��������
B operator+(B& b, int a) {
	B temp;
	temp.m_A = b.m_A + a;
	temp.m_B = b.m_B + a;
	return temp;
}
void test02() {
	B b1;
	B b2;
	b1.m_A = 20;
	b1.m_B = 20;
	b2.m_A = 20;
	b2.m_B = 20;
	B b3 = b1 + b2;//��������b3 = operator+(b1,b2);
	cout << b3.m_A << " " << b3.m_B << endl;
	b3 = b3 + 10;
	cout << b3.m_A << " " << b3.m_B << endl;
}
int main() {
	test01();
	test02();
	return 0;
}