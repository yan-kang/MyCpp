/** 
 * Author: kang
 * Date: 2020-11-15 23:49:02
 * LastEditors: kang
 * LastEditTime: 2020-12-05 00:04:47
 * FilePath: \032_ְ������ϵͳ\Sources\main.cpp
 * Description: ְ������ϵͳ
 */
#include "../Headers/workerManager.h"
int main(int argc, char const *argv[])
{
	//���Դ���
	// Worker *worker = NULL;
	// worker=new Employee(1,"����",1);
	// worker->showInfo();
	// delete worker;

	// worker = new Manager(2,"����",2);
	// worker->showInfo();
	// delete worker;

	// worker = new Boss(2,"����",2);
	// worker->showInfo();
	// delete worker;
	
	
	/* code */
	//ʵ�����������
	WorkerManager workerManager;
	int choice = 0;
	while(true){
		workerManager.showMenu();
		cout<<"����������ѡ��"<<endl;
		cin>>choice;
		switch(choice){
			case 0://�˳�ϵͳ
				workerManager.exitSystem();
				break;
			case 1://���ְ��
				workerManager.AddEmp();
				break;
			case 2://��ʾְ��
				break;
			case 3://ɾ��ְ��
				break;
			case 4://�޸�ְ��
				break;
			case 5://����ְ��
				break;
			case 6://����ְ��
				break;
			case 7://����ĵ�
				break;

			default:
				system("cls");
		}
	}
	system("pause");
	return 0;
}