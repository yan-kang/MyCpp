#include <iostream>
using namespace std;

//������
class Person {
public:
	//��Ա���������const�����ε���thisָ�룬����ָ���ֵҲ���ɸı�
	void showPerson() const {
		//this->m_A = 100;//�����������û��const�����д���û���� ��Ϊָ�볣��ָ���ֵ�ǿɸı��
		//this = NULL;//���� thisָ��ı����� ָ�볣�� ָ��ָ�򲻿ɸı�
		this->m_B = 100;//��ȷ����Ϊm_B��mutable���ε�������� �����ڳ��������޸�
	}
	int m_A;
	mutable int m_B;
	void fun() {

	}
};

void test01() {
	Person p;
	p.showPerson();
}

//������
void test02() {
	const Person p;//�ڶ���ǰ��const����Ϊ��������
	//p.m_A = 100;//���󣬲����޸�
	p.m_B = 100;
	p.showPerson();//��ȷ���ɵ��ó�����
	//p.fun();//���� �����Ե�����ͨ��Ա���� ��Ϊ��ͨ��Ա���������޸ĳ�Ա����
}