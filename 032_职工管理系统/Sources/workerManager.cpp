/** 
 * Author: kang
 * Date: 2020-11-18 23:16:13
 * LastEditors: kang
 * LastEditTime: 2020-11-30 20:45:42
 * FilePath: \my-cpp\032_ְ������ϵͳ\Sources\workerManager.cpp
 * Description: ������
 */

#include "../Headers/workerManager.h"

WorkerManager::WorkerManager(){
/**
 * @description: ���캯��
 * @param {*}
 * @return {*}
 */
}
WorkerManager::~WorkerManager(){

}
void WorkerManager::showMenu(){
	/**
	 * չʾ�˵�����
	 */
	cout<<"************************************"<<endl;
	cout<<"******* ��ӭʹ��ְ������ϵͳ��******"<<endl;
	cout<<"********** 0.�˳�������� **********"<<endl;
	cout<<"********** 1.����ְ����Ϣ **********"<<endl;
	cout<<"********** 2.��ʾְ����Ϣ **********"<<endl;
	cout<<"********** 3.ɾ����ְְ�� **********"<<endl;
	cout<<"********** 4.�޸�ְ����Ϣ **********"<<endl;
	cout<<"********** 5.����ְ����Ϣ **********"<<endl;
	cout<<"********** 6.���ձ������ **********"<<endl;
	cout<<"********** 7.��������ĵ� **********"<<endl;
	cout<<"************************************"<<endl;
}
void WorkerManager::exitSystem(){
	cout<<"��ӭ�´�ʹ�ã�"<<endl;
	system("pause");
	exit(0);
}