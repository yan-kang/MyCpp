#include <iostream>
using namespace std;

//继承中同名静态成员处理方式
class Base {
public:
	static void fun() {
		cout << "父类的静态同名函数" << endl;
	}
	static void fun(int) {
		cout << "父类静态同名函数重载" << endl;
	}
	static int m_A;
};
int Base::m_A = 100;
class Son :public Base {
public:
	static int m_A;
	static void fun() {
		cout << "子类的同名静态成员函数" << endl;
	}
};
int Son::m_A = 200;
//同名静态成员属性
void test01() {
	//1.通过对象访问
	cout << "通过对象访问：" << endl;
	Son s;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;

	//2.通过类名访问
	cout << "通过类名访问：" << endl;
	cout << Son::m_A << endl;
	cout << Son::Base::m_A << endl;//两个::含义不同

}
//同名静态成员函数
void test02() {
	//通过对象访问
	Son s;
	s.fun();
	s.Base::fun();

	//通过类名访问
	Son::fun();
	Son::Base::fun();
	//子类出现和父类同名函数时 也会隐藏父类所以同名成员函数
	//需通过加作用域来访问
	//Son::Base(10);//错误 
	Son::Base::fun(100);
}
int main() {
	test01();
	test02();
	return 0;
}