#include <iostream>
using namespace std;

//以公开课网页为例

//1.普通实现页面
//Java页面
class Java {
public:
	void header() {
		cout << "公共头部" << endl;

	}
	void footer() {
		cout << "公共底部" << endl;
	}
	void left() {
		cout << "公共左侧" << endl;
	}
	void content() {
		cout << "Java视频" << endl;
	}
};
//Python页面
class Python {
public:
	void header() {
		cout << "公共头部" << endl;

	}
	void footer() {
		cout << "公共底部" << endl;
	}
	void left() {
		cout << "公共左侧" << endl;
	}
	void content() {
		cout << "Python视频" << endl;
	}
};
//C++页面
class Cpp {
public:
	void header() {
		cout << "公共头部" << endl;

	}
	void footer() {
		cout << "公共底部" << endl;
	}
	void left() {
		cout << "公共左侧" << endl;
	}
	void content() {
		cout << "C++视频" << endl;
	}
};
void test01() {
	cout << "Java页面如下:" << endl;
	Java java;
	java.header();
	java.footer();
	java.left();
	java.content();

	cout << "----------------" << endl;
	cout << "Python页面如下:" << endl;
	Python python;
	python.header();
	python.footer();
	python.left();
	python.content();

	cout << "----------------" << endl;
	cout << "C++页面如下:" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

//继承实现
class Public {
public:
	void header() {
		cout << "公共头部" << endl;

	}
	void footer() {
		cout << "公共底部" << endl;
	}
	void left() {
		cout << "公共左侧" << endl;
	}
	void content() {
		cout << "主体内容" << endl;
	}
};

//继承的好处：减少重复代码
//语法：class 子类 : 继承方式(如public) 父类
//子类也称为派生类 父类也称为基类
//Java页面
class Java1 : public Public {
public:
	void content() {
		cout << "Java视频" << endl;
	}
};
//Python页面
class Python1 : public Public {
public:
	void content() {
		cout << "Python视频" << endl;
	}
};
//C++页面
class Cpp1 : public Public {
public:
	void content() {
		cout << "C++视频" << endl;
	}
};
void test02() {
	cout << "----------------" << endl;
	cout << "继承方式：" << endl;
	cout << "Java页面如下:" << endl;
	Java1 java1;
	java1.header();
	java1.footer();
	java1.left();
	java1.content();

	cout << "----------------" << endl;
	cout << "Python页面如下:" << endl;
	Python1 python1;
	python1.header();
	python1.footer();
	python1.left();
	python1.content();

	cout << "----------------" << endl;
	cout << "C++页面如下:" << endl;
	Cpp1 cpp1;
	cpp1.header();
	cpp1.footer();
	cpp1.left();
	cpp1.content();
}
int main() {
	test01();
	test02();
	return 0;
}