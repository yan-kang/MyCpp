#include <iostream>
using namespace std;

//�̳��еĶ���ģ��
class Base {
public:
	int m_A;
	void test() {

	}
protected:
	int m_B;
private:
	int m_C;//˽�г�Ա���� ����Ҳ��̳� ��������
			//��������m_C�����಻���� ����ռ���ڴ�ռ�
};
class Son : public Base
{
public:
	int m_D;
};

//����vs������Ա������ʾ�����߲鿴����ģ��
//cl /d1 reportSingClassLayout���� �ļ���
void test01() {
	Son s1;
	//���������зǾ�̬��Ա���Զ��ᱻ����̳�
	//�������˽�г�Ա���Ա����� ���ɷ���(�̳е�������)
	cout << sizeof(Son) << endl;
	cout << sizeof(s1) << endl;
}
int main() {
	test01();
	return 0;
}