#include <iostream>
using namespace std;

//�Թ�������ҳΪ��

//1.��ͨʵ��ҳ��
//Javaҳ��
class Java {
public:
	void header() {
		cout << "����ͷ��" << endl;

	}
	void footer() {
		cout << "�����ײ�" << endl;
	}
	void left() {
		cout << "�������" << endl;
	}
	void content() {
		cout << "Java��Ƶ" << endl;
	}
};
//Pythonҳ��
class Python {
public:
	void header() {
		cout << "����ͷ��" << endl;

	}
	void footer() {
		cout << "�����ײ�" << endl;
	}
	void left() {
		cout << "�������" << endl;
	}
	void content() {
		cout << "Python��Ƶ" << endl;
	}
};
//C++ҳ��
class Cpp {
public:
	void header() {
		cout << "����ͷ��" << endl;

	}
	void footer() {
		cout << "�����ײ�" << endl;
	}
	void left() {
		cout << "�������" << endl;
	}
	void content() {
		cout << "C++��Ƶ" << endl;
	}
};
void test01() {
	cout << "Javaҳ������:" << endl;
	Java java;
	java.header();
	java.footer();
	java.left();
	java.content();

	cout << "----------------" << endl;
	cout << "Pythonҳ������:" << endl;
	Python python;
	python.header();
	python.footer();
	python.left();
	python.content();

	cout << "----------------" << endl;
	cout << "C++ҳ������:" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

//�̳�ʵ��
class Public {
public:
	void header() {
		cout << "����ͷ��" << endl;

	}
	void footer() {
		cout << "�����ײ�" << endl;
	}
	void left() {
		cout << "�������" << endl;
	}
	void content() {
		cout << "��������" << endl;
	}
};

//�̳еĺô��������ظ�����
//�﷨��class ���� : �̳з�ʽ(��public) ����
//����Ҳ��Ϊ������ ����Ҳ��Ϊ����
//Javaҳ��
class Java1 : public Public {
public:
	void content() {
		cout << "Java��Ƶ" << endl;
	}
};
//Pythonҳ��
class Python1 : public Public {
public:
	void content() {
		cout << "Python��Ƶ" << endl;
	}
};
//C++ҳ��
class Cpp1 : public Public {
public:
	void content() {
		cout << "C++��Ƶ" << endl;
	}
};
void test02() {
	cout << "----------------" << endl;
	cout << "�̳з�ʽ��" << endl;
	cout << "Javaҳ������:" << endl;
	Java1 java1;
	java1.header();
	java1.footer();
	java1.left();
	java1.content();

	cout << "----------------" << endl;
	cout << "Pythonҳ������:" << endl;
	Python1 python1;
	python1.header();
	python1.footer();
	python1.left();
	python1.content();

	cout << "----------------" << endl;
	cout << "C++ҳ������:" << endl;
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