/** 
 * Author: kang
 * Date: 2020-11-15 23:49:02
 * LastEditors: kang
 * LastEditTime: 2020-11-30 20:45:26
 * FilePath: \my-cpp\032_ְ������ϵͳ\Sources\main.cpp
 * Description: ְ������ϵͳ
 */
#include "../Headers/empMana.h"
int main(int argc, char const *argv[])
{
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