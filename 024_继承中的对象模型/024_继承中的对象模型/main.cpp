#include <iostream>
using namespace std;

//继承中的对象模型
class Base {
public:
	int m_A;
	void test() {

	}
protected:
	int m_B;
private:
	int m_C;//私有成员属性 子类也会继承 但被隐藏
			//其后果就是m_C在子类不可用 但仍占用内存空间
};
class Son : public Base
{
public:
	int m_D;
};

//利用vs开发人员命令提示符工具查看对象模型
//cl /d1 reportSingClassLayout类名 文件名
void test01() {
	Son s1;
	//父类中所有非静态成员属性都会被子类继承
	//但父类的私有成员属性被隐藏 不可访问(继承但不可用)
	cout << sizeof(Son) << endl;
	cout << sizeof(s1) << endl;
}
int main() {
	test01();
	return 0;
}