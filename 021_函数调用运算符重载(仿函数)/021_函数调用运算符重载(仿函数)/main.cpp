#include <iostream>
using namespace std;

//�����������������

//��ӡ�����
class MyPrint {
public:
	//���غ������������
	void operator()(string text) {
		cout << text << endl;
	}
};
void myPrint0(string text) {
	cout << text << endl;
}
void test01() {
	MyPrint myPrint;

	myPrint("Hello World!");//�˴�����myPrint�ڵ������غ��()
							//�����뺯�����ü������� ��˳�Ϊ�º���
	myPrint0("Hello World!");//�˴��Ǻ�������
}

//�ӷ���
class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};
void test02() {
	MyAdd myAdd;
	cout<< myAdd(2,3) << endl;

	//������������
	cout << MyAdd()(100, 100) << endl;
}
int main() {
	test01();
	test02();
	return 0;
}