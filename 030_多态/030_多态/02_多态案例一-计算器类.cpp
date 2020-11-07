#include <iostream>
using namespace std;

//��̬�ŵ�
//1.������֯�ṹ����
//2.�ɶ���ǿ
//3.����ǰ�ںͺ��ڵ���չά��

//��ͨд��
class Caculator {
public:
	int m_Num1;
	int m_Num2;
	int getResult(string oper) {
		if (oper == "+") {
			return m_Num1 + m_Num2;
		}
		else if (oper == "-") {
			return m_Num1 - m_Num2;
		}
		else if (oper == "*") {
			return m_Num1 * m_Num2;
		}
		//�������չ�¹��ܣ���Ҫ�޸�Դ��
		//����ʱ�ᳫ����ԭ��
		//����ԭ�򣺶���չ���п��� ���޸Ľ��йر�
	}
};
void test021() {
	Caculator ca;
	ca.m_Num1 = 10;
	ca.m_Num2 = 5;

	cout << ca.m_Num1 << "+" << ca.m_Num2 << "=" << ca.getResult("+") << endl;
	cout << ca.m_Num1 << "-" << ca.m_Num2 << "=" << ca.getResult("-") << endl;
	cout << ca.m_Num1 << "*" << ca.m_Num2 << "=" << ca.getResult("*") << endl;
	
}

//���ö�̬ʵ��
//��̬�ô���
//1.��֯�ṹ���� �ɶ���ǿ
//2.��չ��ǿ ά���Ը�
//�������ĳ�����
class AbstractCaculator {
public:
	int m_Num1;
	int m_Num2;
	virtual int getResult() {
		return 0;
	}
};
//�ӷ���������
class AddCaculator :public AbstractCaculator {
public:
	int getResult() {
		return m_Num1 + m_Num2;
	}
};
//��������������
class SubCaculator :public AbstractCaculator {
public:
	int getResult() {
		return m_Num1 - m_Num2;
	}
};
//�˷���������
class MulCaculator :public AbstractCaculator {
public:
	int getResult() {
		return m_Num1 * m_Num2;
	}
};
//��չʱ����һ����
void test022() {
	//��̬ʹ������ ����ָ�������ָ���������

	cout << "��̬ʵ�֣�" << endl;
	//�ӷ�����
	AbstractCaculator* cal = new AddCaculator;
	cal->m_Num1 = 100;
	cal->m_Num2 = 50;
	cout << cal->m_Num1 << "+" << cal->m_Num2 << "=" << cal->getResult() << endl;
	//ʹ���� ����
	delete cal;

	//��������
	cal = new SubCaculator;
	cal->m_Num1 = 100;
	cal->m_Num2 = 50;
	cout << cal->m_Num1 << "-" << cal->m_Num2 << "=" << cal->getResult() << endl;
	//ʹ���� ����
	delete cal;

	//�˷�����
	cal = new MulCaculator;
	cal->m_Num1 = 100;
	cal->m_Num2 = 50;
	cout << cal->m_Num1 << "*" << cal->m_Num2 << "=" << cal->getResult() << endl;
	//ʹ���� ����
	delete cal;
}
//int main() {
//	test021();
//	test022();
//	return 0;
//}