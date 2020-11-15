#include <iostream>
using namespace std;

//文本文件写操作
//1.包含头文件
#include <fstream>
void test01(){
	//2.创建流对象
	ofstream ofs;//也可以使用fstream类

	//3.指定打开方式
	ofs.open("test.txt",ios::out);

	//4.写内容
	ofs<<"姓名：张三"<<endl<<"性别：男"<<endl<<"年龄：18"<<endl;

	//5.关闭文件
	ofs.close();
}
int main(int argc, char const *argv[])
{
	/* code */
	test01();
	return 0;
}