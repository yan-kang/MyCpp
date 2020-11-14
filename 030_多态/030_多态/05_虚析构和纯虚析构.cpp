#include <iostream>
using namespace std;

//虚析构和纯虚析构
class Animal{
	/**
	 * Animal类
	 */
public:
	//纯虚函数
	virtual void speak()=0;
	Animal(){
		cout<<"Animal的构造函数"<<endl;
	}
	//利用虚析构可以解决父类指针释放子类对象时不干净的问题
	// virtual ~Animal(){//将父类析构函数改为虚析构
	// 	cout<<"Animal的析构函数"<<endl;
	// }
	// 纯虚析构 需要声明 也需要实现
	// 有了纯虚析构后 该类也是抽象类 不可实例化
	virtual ~Animal()=0;

};
Animal::~Animal(){
	/**
	 * Animal下纯虚析构的实现体
	 */
	cout<<"Animal的纯虚析构函数"<<endl;
}
class Cat:public Animal{
	/**
	 * 继承Animal类的Cat类
	 */
public:
	virtual void speak(){
		cout<<*m_Name<<"小猫在说话"<<endl;
	}
	string *m_Name;
	Cat(string name){
		cout<<"Cat的构造函数"<<endl;
		m_Name =new string(name);
	}
	~Cat(){
		if(m_Name!=NULL){
			cout<<"Cat的析构函数"<<endl;
			delete m_Name;
			m_Name=NULL;
		}
	}
};
void test01(){
	Animal * animal = new Cat("Tom");
	animal->speak();
	//父类指针在析构时 不会调用子类的析构函数 所以在子类中有
	//堆区数据时会造成内存泄漏
	delete animal;
}

int main() {
	test01();
	return 0;
}