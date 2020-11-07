#include <iostream>
using namespace std;

//制作饮料
//利用多态实现 提供抽象类制作饮品基类 提供子类制作咖啡和茶叶

//抽象类
class AbstractDrink {
public:
	virtual void boil() = 0;
	virtual void brew() = 0;
	virtual void pourInCup() = 0;
	virtual void putSomething() = 0;
	void makeDrink() {
		boil();
		brew();
		pourInCup();
		putSomething();
	}
};

//咖啡类
class Coffee :public AbstractDrink {
public:
	void boil() {
		cout << "烧水" << endl;
	}
	virtual void brew() {
		cout << "冲泡咖啡" << endl;
	}
	virtual void pourInCup() {
		cout << "倒入杯中" << endl;
	}
	virtual void putSomething() {
		cout << "加入糖和牛奶" << endl;
	}
	~Coffee() {
		cout << "咖啡析构" << endl;
	}
};
//茶类
class Tea :public AbstractDrink {
public:
	void boil() {
		cout << "烧水" << endl;
	}
	virtual void brew() {
		cout << "冲泡茶叶" << endl;
	}
	virtual void pourInCup() {
		cout << "倒入杯中" << endl;
	}
	virtual void putSomething() {
		cout << "加入柠檬" << endl;
	}
	Tea() {
		cout << "茶构造" << endl;
	}
	~Tea() {
		cout << "茶析构" << endl;
	}
};
void doWork(AbstractDrink *abs) {
	abs->makeDrink();
	delete abs;
}
void test41() {
	//制作咖啡
	doWork(new Coffee);
	cout << "--------------" << endl;
	//制作茶
	doWork(new Tea);
	system("pause");
}
int main() {
	test41();
	return 0;
}