#include <iostream>
using namespace std;

//����������̳�ͬһ������
//����ĳһ����ͬʱ�̳�����������
//���ּ̳г�֮Ϊ���μ̳У�������ʯ�̳�

//���⣺1.������
//2.�ظ��̳�

//������
class Animal {
public:
	int m_Age;//���������
};
//������̳� ������μ̳е�����
//�̳�֮ǰ���Ϲؼ���virtual ��Ϊ��̳�
//��ʱ�����Ϊ�����

//��
class Sheep :virtual public Animal {

};
//��
class Camel :virtual public Animal {

};
//����
class Alpaca :public Sheep, public Camel {

};
void test01() {
	Alpaca ap;

	ap.Sheep::m_Age = 100;
	ap.Camel::m_Age = 200;
	//�����μ̳�ʱ ��������ӵ����ͬ���� ������������
	cout << ap.Sheep::m_Age << endl;
	cout << ap.Camel::m_Age << endl;
	cout << ap.m_Age << endl;
	//���μ̳е������������� �����Դ�˷�
	//ʹ����̳�֮���������ַ�ʽ���ʵĶ���ͬһ����
}
int main() {
	test01();
	return 0;
}