#include <iostream>
using namespace std;

//���麯���ͳ�����
class Base {
public:
	//���麯��
	//ֻҪ��һ�����麯�� �������г�����
	virtual void fun() = 0;
};
//��������ص�
//1.�޷�ʵ��������
//2.���������д����Ĵ��麯�� ����Ҳ�ǳ�����
class Son :public Base {
public:
	virtual void fun() {
		//��д����Ĵ��麯��
		cout << "fun����" << endl;
	}
};
void test31() {
	//Base a;//���� �������޷�ʵ��������
	//new Base;//
	Son s;
	s.fun();
	Base* b = new Son;
	b->fun();
}
//int main() {
//	test31();
//	return 0;
//}