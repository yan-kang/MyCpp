#include <iostream>
using namespace std;
//���ع�ϵ�����

//1.
class A {
public:
	string m_Name;
	int m_Age;
	A(string name, int age) {
		m_Name = name;
		m_Age = age;
	}
	//1.==����
	bool operator==(A &a) {
		if (this->m_Age == a.m_Age && this->m_Name == a.m_Name) {
			return true;
		}
		else
		{
			return false;
		}
	}
	//2.!=����
	bool operator!=(A& a) {
		if (this->m_Age != a.m_Age || this->m_Name != a.m_Name) {
			return true;
		}
		else
		{
			return false;
		}
	}
	//3.>����
	bool operator>(A& a) {
		if (this->m_Age > a.m_Age) {
			return true;
		}
		else {
			return false;
		}
	}
	//4.<����
	bool operator<(A& a) {
		if (this->m_Age < a.m_Age) {
			return true;
		}
		else {
			return false;
		}
	}
};
void test01() {
	A a1("kang", 20);
	A a2("kang", 20);
	if (a1 == a2) {
		cout << "a1 a2���" << endl;
	}
	else
	{
		cout << "a1 a2�����" << endl;
		if (a1 > a2) {
			cout << "a1����a2" << endl;
		}
		else {
			cout << "a1С��a2" << endl;
		}
		if (a1 < a2) {
			cout << "a1С��a2" << endl;
		}
		else {
			cout << "a1����a2" << endl;
		}
	}
	if (a1 != a2) {
		cout << "a1 a2�����" << endl;
		if (a1 > a2) {
			cout << "a1����a2" << endl;
		}
		else {
			cout << "a1С��a2" << endl;
		}
		if (a1 < a2) {
			cout << "a1С��a2" << endl;
		}
		else {
			cout << "a1����a2" << endl;
		}
	}
	else {
		cout << "a1 a2���" << endl;
	}
}
int main() {
	test01();

	return 0;
}