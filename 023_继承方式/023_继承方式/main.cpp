#include <iostream>
using namespace std;
//�̳з�ʽ

//1.�����̳�
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1 {
public:
	void func() {
		m_A = 10;//�����еĹ�����Ա ����������Ȼ�ǹ�����
		m_B = 10;//����ı�����Ա ����������Ȼ�Ǳ�����
		//m_C = 10;//���� �����е�˽�г�Ա �����޷�����
	}
};
void test01() {
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//����  ����Ȩ�� ���ⲻ�ɷ���
}

//2.�����̳�
class Base2 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son2 :protected Base2 {
public:
	void fun() {
		m_A = 100;//���๫����Ա �������Ϊ������Ա
		m_B = 100;//���ౣ����Ա ��������Ϊ������Ա
		//m_C = 100;//���� ����˽�г�Ա���ɷ���
	}
};
void test02() {
	Son2 s2;
	//s2.m_A = 1000;
	//s2.m_B = 1000;
	//���� ������Ա ���ⲻ�ɷ���
}

//3.˽�м̳�
class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3 :private Base3 {
public:
	void fun() {
		m_A = 100;//���๫����Ա ��Ϊ˽�г�Ա
		m_B = 100;//���ౣ����Ա ��Ϊ˽�г�Ա
		//m_C = 100;//���� ����˽�г�Ա ���ɷ���
	}
};
void test03() {
	Son3 s3;
	//s3.m_A = 1000;
	//s3.m_B = 1000;
	//˽�г�Ա ���ⲻ�ɷ���
}
class GrandSon :public Son3 {
public:
	void fun() {
		//m_A = 1000;
		//m_B = 1000;
		//������Son3�� m_A��m_B�Ѿ���˽�г�Ա ����Son3������GrandSon���ٿɷ�����������Ա
	}
};
int main() {

}