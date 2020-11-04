#include <iostream>
using namespace std;
//���������
//1.��(+)���������
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
//2).1.��������
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


//2.����(<<)���������
class C {
	friend ostream& operator<<(ostream& cout, const C& c);//ͨ����Ԫ��������˽�г�Ա
private:
	int m_A;
	int m_B;
	//1).���ó�Ա��������
	//�������ó�Ա����������������� ��Ϊ�����õ���cout���ڲ����Ҳ�
	//void operator<<(C &c) {

	//}
public:
	C(int a,int b) {
		m_A = a;
		m_B = b;
	}
	//����ǰ��++�����
	C& operator++() {//�˴�ʹ�����÷��أ����ʹ��ֵ���������ٶԷ���ֵ�������� �μ�ǰ�����ʽ���
					//����������Ϊ��һֱ��ͬһ�����ݲ���
		m_A++;
		m_B++;
		return *this;
	}
	//���غ���++�����
	C operator++(int) {//�˴�int�Ǹ�ռλ���� ��������ǰ���õ���
						//�˴�ʹ��ֵ���� ����Ϊc�Ǹ���ʱ����
		//�ȼ�¼��ǰֵ
		C c = *this;
		//�����
		m_A++;
		m_B++;
		//�ٷ���
		return c;
	}
};
//2).����ȫ�ֺ���
ostream &operator<<(ostream& cout, const C& c) {
	cout << c.m_A << " " << c.m_B;
	return cout;//��Ϊ�˴���cout������ ����Ϊ��������
}
void test03() {
	C c(10,10);

	cout << c << endl;//��ʽ���
}

//3.����(++)���������
//�Զ�������
//�˴�������һ��C��
void test04() {
	C c1(0,0);
	
	cout << ++(++c1) << endl;
	cout << c1++ << endl;//�˴���vs2019�£�����������������ʱ�ڶ���������const C& cû��const���εĻ�
						//��++����ʱ����ֵ���ط�ʽ�ᱨ��ԭ���в���
	cout << c1 << endl;
}

//4.��ֵ���������
class D {
public:
	int* m_A;
	D(int a) {
		m_A = new int(a);
	}
	~D(){
		if (m_A != NULL) {
			delete m_A;
			m_A = NULL;
		}
	}
	D& operator=(D &d) {
		//������Ĭ���ṩ����ǳ������ʽ
		//��m_A = d.m_A;

		//Ӧ�����ж��Ƿ��������ڶ���  ����������ͷ� �ٽ������ ���������е�d2.m_A�����Ѵ���
		if (m_A != NULL) {
			delete m_A;
			m_A = NULL;
		}
		//���
		m_A = new int(*d.m_A);
		return *this;
	}
};
void test05() {
	D d1(18);
	D d2(20);
	D d3(25);

	d3 = d2 = d1;//��ֵ����

	cout << *d1.m_A << endl;
	cout << *d2.m_A << endl;
	cout << *d3.m_A << endl;

	//���ʹ��Ĭ�Ϻ�����������ʱ���� ��Ϊ��ʱd2��m_AҲָ��d1.m_A��ָ���ڴ� ����ʱ�ظ�����ͬһ�ڴ�
	//����������������
}
int main() {
	test01();
	test02();
	test03();
	test04();
	test05();
	return 0;
}