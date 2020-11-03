#include <iostream>
using namespace std;

//常函数
class Person {
public:
	//成员函数后面加const，修饰的是this指针，让其指向的值也不可改变
	void showPerson() const {
		//this->m_A = 100;//如果函数后面没有const则这行代码没问题 因为指针常量指向的值是可改变的
		//this = NULL;//错误 this指针的本质是 指针常量 指针指向不可改变
		this->m_B = 100;//正确，因为m_B是mutable修饰的特殊变量 可以在常函数中修改
	}
	int m_A;
	mutable int m_B;
	void fun() {

	}
};

void test01() {
	Person p;
	p.showPerson();
}

//常对象
void test02() {
	const Person p;//在对象前加const，变为常量对象
	//p.m_A = 100;//错误，不可修改
	p.m_B = 100;
	p.showPerson();//正确，可调用常函数
	//p.fun();//错误 不可以调用普通成员函数 因为普通成员函数可以修改成员属性
}