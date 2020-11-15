#include <fstream>
#include <iostream>
using namespace std;

class Person
{
	/**
	 * 人物类
	 */
public:
	char m_Name[64];
	int m_Age;
	
};
void test01(){
	//创建流对象
	ifstream ifs;
	//打开文件并判断是否打开成功
	ifs.open("person.txt",ios::in|ios::binary);
		if(!(ifs.is_open())){
		cout<<"文件打开失败！"<<endl;
		return;
	}
	//读文件
	Person p;
	ifs.read((char*)&p,sizeof(p));
	cout<<p.m_Name<<endl<<p.m_Age<<endl;
	//关闭文件
	ifs.close();
}
int main(int argc, char const *argv[])
{
	/* code */
	test01();
	return 0;
}