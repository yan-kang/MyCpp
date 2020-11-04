#include <iostream>
using namespace std;
//运算符重载
//1.加(+)运算符重载
//1).通过成员函数重载
class A {
public:
	int m_A;
	int m_B;
	A operator+(A& a) {
		A temp;
		temp.m_A = this->m_A + a.m_A;
		temp.m_B = this->m_B + a.m_B;
		return temp;
	}
};
void test01() {
	A a1;
	A a2;
	a1.m_A = 10;
	a1.m_B = 10;
	a2.m_A = 10;
	a2.m_B = 10;

	A a3 = a1 + a2;//本质上是a3 = a1.operator+(a2);

	cout << a3.m_A << " " << a3.m_B << endl;
}
//2).通过全局函数重载
class B {
public:
	int m_A;
	int m_B;
};
B operator+(B &a1,B &a2) {
	B temp;
	temp.m_A = a1.m_A + a2.m_A;
	temp.m_B = a1.m_B + a2.m_B;
	return temp;
}
//2).1.函数重载
B operator+(B& b, int a) {
	B temp;
	temp.m_A = b.m_A + a;
	temp.m_B = b.m_B + a;
	return temp;
}
void test02() {
	B b1;
	B b2;
	b1.m_A = 20;
	b1.m_B = 20;
	b2.m_A = 20;
	b2.m_B = 20;
	B b3 = b1 + b2;//本质上是b3 = operator+(b1,b2);
	cout << b3.m_A << " " << b3.m_B << endl;
	b3 = b3 + 10;
	cout << b3.m_A << " " << b3.m_B << endl;
}


//2.左移(<<)运算符重载
class C {
	friend ostream& operator<<(ostream& cout, const C& c);//通过友元技术访问私有成员
private:
	int m_A;
	int m_B;
	//1).利用成员函数重载
	//不会利用成员函数重载左移运算符 因为这样得到的cout会在参数右侧
	//void operator<<(C &c) {

	//}
public:
	C(int a,int b) {
		m_A = a;
		m_B = b;
	}
	//重载前置++运算符
	C& operator++() {//此处使用引用返回，如果使用值返回则不能再对返回值继续操作 参见前面的链式编程
					//返回引用是为了一直对同一个数据操作
		m_A++;
		m_B++;
		return *this;
	}
	//重载后置++运算符
	C operator++(int) {//此处int是个占位参数 用以区分前后置递增
						//此处使用值返回 是因为c是个临时变量
		//先记录当前值
		C c = *this;
		//后递增
		m_A++;
		m_B++;
		//再返回
		return c;
	}
};
//2).利用全局函数
ostream &operator<<(ostream& cout, const C& c) {
	cout << c.m_A << " " << c.m_B;
	return cout;//因为此处的cout是引用 可以为任意名称
}
void test03() {
	C c(10,10);

	cout << c << endl;//链式编程
}

//3.自增(++)运算符重载
//自定义整型
//此处借用上一例C类
void test04() {
	C c1(0,0);
	
	cout << ++(++c1) << endl;
	cout << c1++ << endl;//此处在vs2019下，如果左移运算符重载时第二个参数即const C& c没有const修饰的话
						//在++重载时利用值返回方式会报错，原因尚不明
	cout << c1 << endl;
}

//4.赋值运算符重载
class D {
public:
	int* m_A;
	D(int a) {
		m_A = new int(a);
	}
	~D(){
		if (m_A != NULL) {
			delete m_A;
			m_A = NULL;
		}
	}
	D& operator=(D &d) {
		//编译器默认提供的是浅拷贝方式
		//即m_A = d.m_A;

		//应该先判断是否有属性在堆区  如果有则先释放 再进行深拷贝 例如例子中的d2.m_A本身已存在
		if (m_A != NULL) {
			delete m_A;
			m_A = NULL;
		}
		//深拷贝
		m_A = new int(*d.m_A);
		return *this;
	}
};
void test05() {
	D d1(18);
	D d2(20);
	D d3(25);

	d3 = d2 = d1;//赋值操作

	cout << *d1.m_A << endl;
	cout << *d2.m_A << endl;
	cout << *d3.m_A << endl;

	//如果使用默认函数函数结束时出错 因为此时d2的m_A也指向d1.m_A所指向内存 析构时重复操作同一内存
	//利用深拷贝解决该问题
}
int main() {
	test01();
	test02();
	test03();
	test04();
	test05();
	return 0;
}