#include <iostream>
using namespace std;

//多态优点
//1.代码组织结构清晰
//2.可读性强
//3.利于前期和后期的扩展维护

//普通写法
class Caculator {
public:
	int m_Num1;
	int m_Num2;
	int getResult(string oper) {
		if (oper == "+") {
			return m_Num1 + m_Num2;
		}
		else if (oper == "-") {
			return m_Num1 - m_Num2;
		}
		else if (oper == "*") {
			return m_Num1 * m_Num2;
		}
		//如果想扩展新功能，需要修改源码
		//开发时提倡开闭原则
		//开闭原则：对扩展进行开放 对修改进行关闭
	}
};
void test021() {
	Caculator ca;
	ca.m_Num1 = 10;
	ca.m_Num2 = 5;

	cout << ca.m_Num1 << "+" << ca.m_Num2 << "=" << ca.getResult("+") << endl;
	cout << ca.m_Num1 << "-" << ca.m_Num2 << "=" << ca.getResult("-") << endl;
	cout << ca.m_Num1 << "*" << ca.m_Num2 << "=" << ca.getResult("*") << endl;
	
}

//利用多态实现
//多态好处：
//1.组织结构清晰 可读性强
//2.扩展性强 维护性高
//计算器的抽象类
class AbstractCaculator {
public:
	int m_Num1;
	int m_Num2;
	virtual int getResult() {
		return 0;
	}
};
//加法计算器类
class AddCaculator :public AbstractCaculator {
public:
	int getResult() {
		return m_Num1 + m_Num2;
	}
};
//减法法计算器类
class SubCaculator :public AbstractCaculator {
public:
	int getResult() {
		return m_Num1 - m_Num2;
	}
};
//乘法计算器类
class MulCaculator :public AbstractCaculator {
public:
	int getResult() {
		return m_Num1 * m_Num2;
	}
};
//扩展时再来一个类
void test022() {
	//多态使用条件 父类指针或引用指向子类对象

	cout << "多态实现：" << endl;
	//加法运算
	AbstractCaculator* cal = new AddCaculator;
	cal->m_Num1 = 100;
	cal->m_Num2 = 50;
	cout << cal->m_Num1 << "+" << cal->m_Num2 << "=" << cal->getResult() << endl;
	//使用完 销毁
	delete cal;

	//减法运算
	cal = new SubCaculator;
	cal->m_Num1 = 100;
	cal->m_Num2 = 50;
	cout << cal->m_Num1 << "-" << cal->m_Num2 << "=" << cal->getResult() << endl;
	//使用完 销毁
	delete cal;

	//乘法运算
	cal = new MulCaculator;
	cal->m_Num1 = 100;
	cal->m_Num2 = 50;
	cout << cal->m_Num1 << "*" << cal->m_Num2 << "=" << cal->getResult() << endl;
	//使用完 销毁
	delete cal;
}
//int main() {
//	test021();
//	test022();
//	return 0;
//}