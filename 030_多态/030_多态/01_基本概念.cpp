#include <iostream>
using namespace std;
//��̬
//������
class Animal {
public:
	void speak() {
		cout << "������˵��" << endl;
	}
	//�麯��
	virtual void dance() {
		cout << "����������" << endl;
	}
};
//è��
class Cat :public Animal {
public:

	//��д ��������ֵ ������ �����б���Ҫ��ȫ��ͬ
	void speak() {
		cout << "è��˵��" << endl;
	}
	void dance() {//�˴��ɼ�virtualҲ�ɲ���
		cout << "è������" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ��� �ڱ���׶�ȷ��������ַ
//�����ִ������ĺ��� ����Ҫ��ַ���  ��virtual���ε��麯��

//��̬��̬����������
//1.�м̳й�ϵ
//2.������д������麯��

//��̬��̬��ʹ��
//�����ָ������� ָ���������
void doSpeak(Animal &animal) {
	animal.speak();//ִ�и��ຯ��
	animal.dance();//ִ�����ຯ�� ��Ϊ����dance���麯��
}
void test01() {
	Cat cat;
	doSpeak(cat);//����Animal������ָ������Cat����cat
}
void test02() {
	//��������ʹ��vs������������ʾ���鿴�಼�ָ������
	cout << sizeof(Animal) << endl;//û���麯��ʱ��1 ���麯��ʱ��4(32λ),64λ����8(ָ����ռ�ֽ�)
	//�����л���һ��ָ���麯�����ָ��vfptr �麯����vftable��¼�˺�����ַ
	cout << sizeof(Cat) << endl;
	//������д�����麯��  ������麯�����ڲ����滻��������麯����ַ

	//�������ָ�������ָ���������ʱ������̬
}
//int main() {
//	test01();
//	test02();
//	return 0;
//}

