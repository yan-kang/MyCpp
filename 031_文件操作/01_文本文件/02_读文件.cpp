//���ļ�����
//1.����ͷ�ļ�
#include <iostream>
#include <fstream>
using namespace std;

void test01(){
	//2.����������
	ifstream ifs;
	//3.���ļ����ж��Ƿ�ɹ�
	ifs.open("test.txt",ios::in);
	if(!ifs.is_open()){
		cout<<"�ļ���ʧ��!"<<endl;
		return;
	}
	//4.������
	//4.1
	// char buf[1024]={0};
	// while(ifs>>buf){
	// 	cout<<buf<<endl;
	// }
	//4.2
	// char buf1[1024]={0};
	// while(ifs.getline(buf1,sizeof(buf1))){
	// 	cout<<buf1<<endl;
	// }
	//4.3
	// string buf2;
	// while(getline(ifs,buf2)){
	// 	cout<<buf2<<endl;
	// }
	//4.4
	char c;
	while((c=ifs.get())!=EOF){
		cout<<c;
	}
	//5.�ر��ļ�
	ifs.close();
}
int main(int argc, char const *argv[])
{
	/* code */
	test01();
	return 0;
}