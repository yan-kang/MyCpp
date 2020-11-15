//读文件操作
//1.包含头文件
#include <iostream>
#include <fstream>
using namespace std;

void test01(){
	//2.创建流对象
	ifstream ifs;
	//3.打开文件并判断是否成功
	ifs.open("test.txt",ios::in);
	if(!ifs.is_open()){
		cout<<"文件打开失败!"<<endl;
		return;
	}
	//4.读数据
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
	//5.关闭文件
	ifs.close();
}
int main(int argc, char const *argv[])
{
	/* code */
	test01();
	return 0;
}