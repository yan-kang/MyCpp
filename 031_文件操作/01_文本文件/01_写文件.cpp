#include <iostream>
using namespace std;

//�ı��ļ�д����
//1.����ͷ�ļ�
#include <fstream>
void test01(){
	//2.����������
	ofstream ofs;//Ҳ����ʹ��fstream��

	//3.ָ���򿪷�ʽ
	ofs.open("test.txt",ios::out);

	//4.д����
	ofs<<"����������"<<endl<<"�Ա���"<<endl<<"���䣺18"<<endl;

	//5.�ر��ļ�
	ofs.close();
}
int main(int argc, char const *argv[])
{
	/* code */
	test01();
	return 0;
}