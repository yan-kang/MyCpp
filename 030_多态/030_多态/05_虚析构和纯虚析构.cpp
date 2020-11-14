#include <iostream>
using namespace std;

//�������ʹ�������
class Animal{
	/**
	 * Animal��
	 */
public:
	//���麯��
	virtual void speak()=0;
	Animal(){
		cout<<"Animal�Ĺ��캯��"<<endl;
	}
	//�������������Խ������ָ���ͷ��������ʱ���ɾ�������
	// virtual ~Animal(){//����������������Ϊ������
	// 	cout<<"Animal����������"<<endl;
	// }
	// �������� ��Ҫ���� Ҳ��Ҫʵ��
	// ���˴��������� ����Ҳ�ǳ����� ����ʵ����
	virtual ~Animal()=0;

};
Animal::~Animal(){
	/**
	 * Animal�´���������ʵ����
	 */
	cout<<"Animal�Ĵ�����������"<<endl;
}
class Cat:public Animal{
	/**
	 * �̳�Animal���Cat��
	 */
public:
	virtual void speak(){
		cout<<*m_Name<<"Сè��˵��"<<endl;
	}
	string *m_Name;
	Cat(string name){
		cout<<"Cat�Ĺ��캯��"<<endl;
		m_Name =new string(name);
	}
	~Cat(){
		if(m_Name!=NULL){
			cout<<"Cat����������"<<endl;
			delete m_Name;
			m_Name=NULL;
		}
	}
};
void test01(){
	Animal * animal = new Cat("Tom");
	animal->speak();
	//����ָ��������ʱ �������������������� ��������������
	//��������ʱ������ڴ�й©
	delete animal;
}

int main() {
	test01();
	return 0;
}