#include <iostream>
using namespace std;

//��������
//���ö�̬ʵ�� �ṩ������������Ʒ���� �ṩ�����������ȺͲ�Ҷ

//������
class AbstractDrink {
public:
	virtual void boil() = 0;
	virtual void brew() = 0;
	virtual void pourInCup() = 0;
	virtual void putSomething() = 0;
	void makeDrink() {
		boil();
		brew();
		pourInCup();
		putSomething();
	}
};

//������
class Coffee :public AbstractDrink {
public:
	void boil() {
		cout << "��ˮ" << endl;
	}
	virtual void brew() {
		cout << "���ݿ���" << endl;
	}
	virtual void pourInCup() {
		cout << "���뱭��" << endl;
	}
	virtual void putSomething() {
		cout << "�����Ǻ�ţ��" << endl;
	}
	~Coffee() {
		cout << "��������" << endl;
	}
};
//����
class Tea :public AbstractDrink {
public:
	void boil() {
		cout << "��ˮ" << endl;
	}
	virtual void brew() {
		cout << "���ݲ�Ҷ" << endl;
	}
	virtual void pourInCup() {
		cout << "���뱭��" << endl;
	}
	virtual void putSomething() {
		cout << "��������" << endl;
	}
	Tea() {
		cout << "�蹹��" << endl;
	}
	~Tea() {
		cout << "������" << endl;
	}
};
void doWork(AbstractDrink *abs) {
	abs->makeDrink();
	delete abs;
}
void test41() {
	//��������
	doWork(new Coffee);
	cout << "--------------" << endl;
	//������
	doWork(new Tea);
	system("pause");
}
int main() {
	test41();
	
	return 0;
}