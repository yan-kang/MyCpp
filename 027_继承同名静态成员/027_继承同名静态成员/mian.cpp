#include <iostream>
using namespace std;

//�̳���ͬ����̬��Ա����ʽ
class Base {
public:
	static void fun() {
		cout << "����ľ�̬ͬ������" << endl;
	}
	static void fun(int) {
		cout << "���ྲ̬ͬ����������" << endl;
	}
	static int m_A;
};
int Base::m_A = 100;
class Son :public Base {
public:
	static int m_A;
	static void fun() {
		cout << "�����ͬ����̬��Ա����" << endl;
	}
};
int Son::m_A = 200;
//ͬ����̬��Ա����
void test01() {
	//1.ͨ���������
	cout << "ͨ��������ʣ�" << endl;
	Son s;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;

	//2.ͨ����������
	cout << "ͨ���������ʣ�" << endl;
	cout << Son::m_A << endl;
	cout << Son::Base::m_A << endl;//����::���岻ͬ

}
//ͬ����̬��Ա����
void test02() {
	//ͨ���������
	Son s;
	s.fun();
	s.Base::fun();

	//ͨ����������
	Son::fun();
	Son::Base::fun();
	//������ֺ͸���ͬ������ʱ Ҳ�����ظ�������ͬ����Ա����
	//��ͨ����������������
	//Son::Base(10);//���� 
	Son::Base::fun(100);
}
int main() {
	test01();
	test02();
	return 0;
}