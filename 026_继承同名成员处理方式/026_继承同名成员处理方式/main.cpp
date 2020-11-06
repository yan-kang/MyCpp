#include <iostream>
using namespace std;
//继承中同名成员处理
class Base {
public:
	Base() {
		m_A = 100;
	}
	int m_A;
	void fun() {
		cout << "父类的fun函数" << endl;
	}
	void fun(int) {
		cout << "父类fun重载" << endl;
	}
};
class Son :public Base {
public:
	Son() {
		m_A = 200;
	}
	int m_A;
	void fun() {
		cout << "子类的fun函数" << endl;
	}
};
void test01() {
	//同名成员属性
	Son s1;
	cout << s1.m_A << endl;
	//如果通过子类对象访问父类中的同名成员 需要加作用域
	cout << s1.Base::m_A << endl;
}
void test02() {
	//同名成员函数
	Son s;
	s.fun();
	s.Base::fun();
	//s.fun(100);//错误
				//原因：如果子类中出现了同名的成员函数 父类中所有同名函数被隐藏
				//需加作用域才能访问 如下：
	s.Base::fun(20);
}
int main() {
	test01();
	test02();
	return 0;
}