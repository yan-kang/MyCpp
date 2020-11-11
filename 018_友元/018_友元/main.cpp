#include <iostream>
using namespace std;

class Building;
//3.��Ա��������Ԫ
class MyFriend {
public:
	MyFriend();
	//��visit�������Է���Building��˽�г�Ա
	void visit();
	//��visit2�����Է���Building��˽�г�Ա
	void visit2();
	Building* building;
};

void test03() {
	MyFriend f;
	f.visit();
	f.visit2();
}

class Building {
friend void goodFriend(Building& building);//1.goodFriendȫ�ֺ�����Building�����Ԫ �ɷ�����˽�г�Ա
friend class GoodFriend;//2.GoodFriend�Ǳ������Ԫ ���Է���˽�г�Ա
friend void MyFriend::visit();//3.Friend���µĳ�Ա������Ϊ�������Ԫ ���Է���˽�г�Ա
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
public:
	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
};

MyFriend::MyFriend() {
	building = new Building;
}
void MyFriend::visit(){
	cout << "���ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "���ڷ��ʣ�" << building->m_BedRoom << endl;//��ȷ ��Ա��������Building����Ԫ ���Է�����˽������
}
void MyFriend::visit2() {
	cout << "���ڷ��ʣ�" << building->m_SittingRoom << endl;

	//cout << "���ڷ��ʣ�" << building->m_BedRoom << endl;//���� ���ɷ���Building��˽�г�Ա
}

//1.ȫ�ֺ�������Ԫ
void goodFriend(Building &building) {
	cout << "�����ѵ�ȫ�ֺ������ڷ��ʣ�" << building.m_SittingRoom << endl;

	cout << "�����ѵ�ȫ�ֺ������ڷ��ʣ�" << building.m_BedRoom << endl;
}

void test01() {
	Building building;
	goodFriend(building);
}

//2.������Ԫ
class GoodFriend {
public:
	Building* building;
	void visit();//����Building�е�����
	GoodFriend() {
		//�ڶ�������һ��Building����
		building = new Building;
	}
};
void GoodFriend::visit() {
	cout << "�����������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�����������ڷ��ʣ�" << building->m_BedRoom << endl;
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