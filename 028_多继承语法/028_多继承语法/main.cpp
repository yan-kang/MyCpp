#include <iostream>
using namespace std;

//��̳�
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
//�﷨ class ���� ���̳з�ʽ ����1, �̳з�ʽ ����2...
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
	//cout << s.m_S << endl;//�����������඼�г�Աm_S ���ֶ�����
							//�����������������
	cout << s.Base1::m_S << endl;
	cout << s.Base2::m_S << endl;
}
int main() {
	test01();
	return 0;
}