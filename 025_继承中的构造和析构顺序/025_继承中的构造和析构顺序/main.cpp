#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "父类的构造函数" << endl;
	}
	~Base() {
		cout << "父类的析构函数" << endl;
	}
};
class Son :public Base {
public:
	Son() {
		cout << "子类的构造函数" << endl;
	}
	~Son() {
		cout << "子类的析构函数" << endl;
	}
};
void test01() {
	Son s1;
	//继承中的构造析构顺序
	//先调用父类构造函数在调用子类构造函数  析构顺序则相反
}
int main() {
	test01();
	return 0;
}