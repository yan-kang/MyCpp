#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "����Ĺ��캯��" << endl;
	}
	~Base() {
		cout << "�������������" << endl;
	}
};
class Son :public Base {
public:
	Son() {
		cout << "����Ĺ��캯��" << endl;
	}
	~Son() {
		cout << "�������������" << endl;
	}
};
void test01() {
	Son s1;
	//�̳��еĹ�������˳��
	//�ȵ��ø��๹�캯���ڵ������๹�캯��  ����˳�����෴
}
int main() {
	test01();
	return 0;
}