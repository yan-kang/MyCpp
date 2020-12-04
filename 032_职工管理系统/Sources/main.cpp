/** 
 * Author: kang
 * Date: 2020-11-15 23:49:02
 * LastEditors: kang
 * LastEditTime: 2020-12-05 00:04:47
 * FilePath: \032_职工管理系统\Sources\main.cpp
 * Description: 职工管理系统
 */
#include "../Headers/workerManager.h"
int main(int argc, char const *argv[])
{
	//测试代码
	// Worker *worker = NULL;
	// worker=new Employee(1,"张三",1);
	// worker->showInfo();
	// delete worker;

	// worker = new Manager(2,"李四",2);
	// worker->showInfo();
	// delete worker;

	// worker = new Boss(2,"李四",2);
	// worker->showInfo();
	// delete worker;
	
	
	/* code */
	//实例化管理对象
	WorkerManager workerManager;
	int choice = 0;
	while(true){
		workerManager.showMenu();
		cout<<"请输入您的选择："<<endl;
		cin>>choice;
		switch(choice){
			case 0://退出系统
				workerManager.exitSystem();
				break;
			case 1://添加职工
				workerManager.AddEmp();
				break;
			case 2://显示职工
				break;
			case 3://删除职工
				break;
			case 4://修改职工
				break;
			case 5://查找职工
				break;
			case 6://排序职工
				break;
			case 7://清空文档
				break;

			default:
				system("cls");
		}
	}
	system("pause");
	return 0;
}