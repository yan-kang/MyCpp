#include <iostream>
using namespace std;

//纯虚函数和抽象类
class Base {
public:
	//纯虚函数
	//只要有一个纯虚函数 则这个类叫抽象函数
	virtual void fun() = 0;
};
//抽象类的特点
//1.无法实例化对象
//2.子类必须重写父类的纯虚函数 否则也是抽象类
class Son :public Base {
public:
	virtual void fun() {
		//重写父类的纯虚函数
		cout << "fun函数" << endl;
	}
};
void test31() {
	//Base a;//错误 抽象类无法实例化对象
	//new Base;//
	Son s;
	s.fun();
	Base* b = new Son;
	b->fun();
}
//int main() {
//	test31();
//	return 0;
//}