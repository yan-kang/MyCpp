#include <iostream>
using namespace std;

//空指针调用成员函数
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
	//p->showAge();//错误 错误原因是因为使用了this，传入的是空指针 此时应判断this == NULL
}
int main() {
	test01();
	return 0;
}