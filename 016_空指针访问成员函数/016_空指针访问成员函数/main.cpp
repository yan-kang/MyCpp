#include <iostream>
using namespace std;

//��ָ����ó�Ա����
class Person {
public:
	void showClassName() {
		cout << "This is the Person class" << endl;
	}
	void showAge() {
		cout << this->m_Age << endl;
	}
	int m_Age;
};

void test01() {
	Person* p = NULL;
	p->showClassName();
	//p->showAge();//���� ����ԭ������Ϊʹ����this��������ǿ�ָ�� ��ʱӦ�ж�this == NULL
}
int main() {
	test01();
	return 0;
}