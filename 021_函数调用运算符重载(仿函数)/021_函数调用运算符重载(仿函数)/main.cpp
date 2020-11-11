#include <iostream>
using namespace std;

//函数调用运算符重载

//打印输出类
class MyPrint {
public:
	//重载函数调用运算符
	void operator()(string text) {
		cout << text << endl;
	}
};
void myPrint0(string text) {
	cout << text << endl;
}
void test01() {
	MyPrint myPrint;

	myPrint("Hello World!");//此处是类myPrint在调用重载后的()
							//由于与函数调用极其相似 因此称为仿函数
	myPrint0("Hello World!");//此处是函数调用
}

//加法类
class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};
void test02() {
	MyAdd myAdd;
	cout<< myAdd(2,3) << endl;

	//匿名函数对象
	cout << MyAdd()(100, 100) << endl;
}
int main() {
	test01();
	test02();
	return 0;
}