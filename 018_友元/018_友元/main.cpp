#include <iostream>
using namespace std;

class Building;
//3.成员函数做友元
class MyFriend {
public:
	MyFriend();
	//让visit函数可以访问Building的私有成员
	void visit();
	//让visit2不可以访问Building的私有成员
	void visit2();
	Building* building;
};

void test03() {
	MyFriend f;
	f.visit();
	f.visit2();
}

class Building {
friend void goodFriend(Building& building);//1.goodFriend全局函数是Building类的友元 可访问其私有成员
friend class GoodFriend;//2.GoodFriend是本类的友元 可以访问私有成员
friend void MyFriend::visit();//3.Friend类下的成员函数作为本类的友元 可以访问私有成员
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
public:
	Building() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
};

MyFriend::MyFriend() {
	building = new Building;
}
void MyFriend::visit(){
	cout << "正在访问：" << building->m_SittingRoom << endl;

	cout << "正在访问：" << building->m_BedRoom << endl;//正确 成员函数是类Building的友元 可以访问其私有属性
}
void MyFriend::visit2() {
	cout << "正在访问：" << building->m_SittingRoom << endl;

	//cout << "正在访问：" << building->m_BedRoom << endl;//错误 不可访问Building的私有成员
}

//1.全局函数做友元
void goodFriend(Building &building) {
	cout << "好朋友的全局函数正在访问：" << building.m_SittingRoom << endl;

	cout << "好朋友的全局函数正在访问：" << building.m_BedRoom << endl;
}

void test01() {
	Building building;
	goodFriend(building);
}

//2.类做友元
class GoodFriend {
public:
	Building* building;
	void visit();//访问Building中的属性
	GoodFriend() {
		//在堆区创建一个Building对象
		building = new Building;
	}
};
void GoodFriend::visit() {
	cout << "好朋友类正在访问：" << building->m_SittingRoom << endl;

	cout << "好朋友类正在访问：" << building->m_BedRoom << endl;
}
void test02() {
	GoodFriend gf;
	gf.visit();
}


int main() {
	test01();
	test02();
	test03();
	return 0;
}