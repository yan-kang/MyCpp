#include <iostream>
using namespace std;
//继承方式

//1.公共继承
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1 {
public:
	void func() {
		m_A = 10;//父类中的公共成员 到子类中依然是公共的
		m_B = 10;//父类的保护成员 到子类中依然是保护的
		//m_C = 10;//错误 父类中的私有成员 子类无法访问
	}
};
void test01() {
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//错误  保护权限 类外不可访问
}

//2.保护继承
class Base2 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son2 :protected Base2 {
public:
	void fun() {
		m_A = 100;//父类公共成员 到子类变为保护成员
		m_B = 100;//父类保护成员 到子类认为保护成员
		//m_C = 100;//错误 父类私有成员不可访问
	}
};
void test02() {
	Son2 s2;
	//s2.m_A = 1000;
	//s2.m_B = 1000;
	//错误 保护成员 类外不可访问
}

//3.私有继承
class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3 :private Base3 {
public:
	void fun() {
		m_A = 100;//父类公共成员 变为私有成员
		m_B = 100;//父类保护成员 变为私有成员
		//m_C = 100;//错误 父类私有成员 不可访问
	}
};
void test03() {
	Son3 s3;
	//s3.m_A = 1000;
	//s3.m_B = 1000;
	//私有成员 类外不可访问
}
class GrandSon :public Son3 {
public:
	void fun() {
		//m_A = 1000;
		//m_B = 1000;
		//由于在Son3中 m_A和m_B已经是私有成员 所以Son3的子类GrandSon不再可访问这两个成员
	}
};
int main() {

}