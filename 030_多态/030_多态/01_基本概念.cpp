#include <iostream>
using namespace std;
//多态
//动物类
class Animal {
public:
	void speak() {
		cout << "动物在说话" << endl;
	}
	//虚函数
	virtual void dance() {
		cout << "动物在跳舞" << endl;
	}
};
//猫类
class Cat :public Animal {
public:

	//重写 函数返回值 函数名 参数列表需要完全相同
	void speak() {
		cout << "猫在说话" << endl;
	}
	void dance() {//此处可加virtual也可不加
		cout << "猫在跳舞" << endl;
	}
};

//执行说话的函数
//地址早绑定 在编译阶段确定函数地址
//如果想执行子类的函数 则需要地址晚绑定  用virtual修饰的虚函数

//动态多态的满足条件
//1.有继承关系
//2.子类重写父类的虚函数

//动态多态的使用
//父类的指针或引用 指向子类对象
void doSpeak(Animal &animal) {
	animal.speak();//执行父类函数
	animal.dance();//执行子类函数 因为父类dance是虚函数
}
void test01() {
	Cat cat;
	doSpeak(cat);//父类Animal的引用指向子类Cat对象cat
}
void test02() {
	//以下内容使用vs开发者命令提示符查看类布局更好理解
	cout << sizeof(Animal) << endl;//没有虚函数时是1 有虚函数时是4(32位),64位下是8(指针所占字节)
	//父类中会多出一个指向虚函数表的指针vfptr 虚函数表vftable记录了函数地址
	cout << sizeof(Cat) << endl;
	//子类重写父类虚函数  子类的虚函数表内部会替换成子类的虚函数地址

	//当父类的指针或引用指向子类对象时发生多态
}
//int main() {
//	test01();
//	test02();
//	return 0;
//}

