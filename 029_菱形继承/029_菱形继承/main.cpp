#include <iostream>
using namespace std;

//两个派生类继承同一个基类
//又有某一个类同时继承两个派生类
//这种继承称之为菱形继承，或者钻石继承

//问题：1.二义性
//2.重复继承

//动物类
class Animal {
public:
	int m_Age;//动物的年龄
};
//利用虚继承 解决菱形继承的问题
//继承之前加上关键字virtual 变为虚继承
//此时基类成为虚基类

//羊
class Sheep :virtual public Animal {

};
//驼
class Camel :virtual public Animal {

};
//羊驼
class Alpaca :public Sheep, public Camel {

};
void test01() {
	Alpaca ap;

	ap.Sheep::m_Age = 100;
	ap.Camel::m_Age = 200;
	//当菱形继承时 两个父类拥有相同数据 加作用域区分
	cout << ap.Sheep::m_Age << endl;
	cout << ap.Camel::m_Age << endl;
	cout << ap.m_Age << endl;
	//菱形继承导致数据有两份 造成资源浪费
	//使用虚继承之后上述三种方式访问的都是同一数据
}
int main() {
	test01();
	return 0;
}