/** 
 * Author: kang
 * Date: 2020-11-18 23:16:13
 * LastEditors: kang
 * LastEditTime: 2020-12-05 00:01:40
 * FilePath: \032_ְ������ϵͳ\Sources\workerManager.cpp
 * Description: ������
 */

#include "../Headers/workerManager.h"

WorkerManager::WorkerManager(){
/**
 * @description: ���캯��
 * @param {*}
 * @return {*}
 */
	this->m_EmpNum=0;
	this->m_EmpArr=NULL;
}
WorkerManager::~WorkerManager(){

}
void WorkerManager::showMenu(){
 /** 
  * description: չʾ�˵�
  * param {*}
  * return {*}
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

void WorkerManager::AddEmp(){
/** 
 * description: ���ְ��
 * param 
 * return {*}
 */
	cout<<"���������ְ����������"<<endl;

	int addNum=0;//�����û�����������
	cin>>addNum;
	if(addNum>0){
		//���
		//��������¿ռ��С
		int newSize=this->m_EmpNum+addNum;

		//�����¿ռ�
		Worker ** newSpace = new Worker *[newSize];

		//����ԭ��������
		if(this->m_EmpArr!=NULL){
			for(int i=0;i<this->m_EmpNum;i++){
				newSpace[i]=this->m_EmpArr[i];
			}
		}
		//�������
		for(int i=0;i<addNum;i++){
			int id;
			string name;
			int dId;

			cout<<"�������"<<i+1<<"��ְ���ı�ţ�"<<endl;
			cin>>id;
			cout<<"�������"<<i+1<<"��ְ����������"<<endl;
			cin>>name;
			cout<<"�������"<<i+1<<"��ְ���Ĳ��ű�ţ�"<<endl;
			cout<<"1.��ְͨԱ"<<endl;
			cout<<"2.����"<<endl;
			cout<<"3.�ϰ�"<<endl;
			cout<<"�������Ӧ���֣�"<<endl;
			cin>>dId;

			Worker * worker=NULL;
			switch (dId)
			{
			case 1:
				/* code */
				worker=new Employee(id,name,1);
				break;
			case 2:
				/* code */
				worker=new Manager(id,name,1);
				break;
			case 3:
				/* code */
				worker=new Boss(id,name,1);
				break;
			default:
				break;
			}
			//��������ְ��ָ�뱣�浽����
			newSpace[this->m_EmpNum+i]=worker;
		}
		//�ͷ�ԭ�пռ�
		delete[]this->m_EmpArr;
		//�����¿ռ�ָ��
		this->m_EmpArr=newSpace;
		//����ְ������
		this->m_EmpNum=newSize;
		cout<<"�ɹ������"<<addNum<<"����ְ��"<<endl;
		
	}

	else{
		cout<<"������������"<<endl;
	}
	system("pause");
	system("cls");
}