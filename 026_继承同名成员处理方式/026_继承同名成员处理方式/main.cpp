#include <iostream>
using namespace std;
//�̳���ͬ����Ա����
class Base {
public:
	Base() {
		m_A = 100;
	}
	int m_A;
	void fun() {
		cout << "�����fun����" << endl;
	}
	void fun(int) {
		cout << "����fun����" << endl;
	}
};
class Son :public Base {
public:
	Son() {
		m_A = 200;
	}
	int m_A;
	void fun() {
		cout << "�����fun����" << endl;
	}
};
void test01() {
	//ͬ����Ա����
	Son s1;
	cout << s1.m_A << endl;
	//���ͨ�����������ʸ����е�ͬ����Ա ��Ҫ��������
	cout << s1.Base::m_A << endl;
}
void test02() {
	//ͬ����Ա����
	Son s;
	s.fun();
	s.Base::fun();
	//s.fun(100);//����
				//ԭ����������г�����ͬ���ĳ�Ա���� ����������ͬ������������
				//�����������ܷ��� ���£�
	s.Base::fun(20);
}
int main() {
	test01();
	test02();
	return 0;
}