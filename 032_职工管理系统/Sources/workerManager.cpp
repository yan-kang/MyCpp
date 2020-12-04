/** 
 * Author: kang
 * Date: 2020-11-18 23:16:13
 * LastEditors: kang
 * LastEditTime: 2020-12-05 00:01:40
 * FilePath: \032_职工管理系统\Sources\workerManager.cpp
 * Description: 管理类
 */

#include "../Headers/workerManager.h"

WorkerManager::WorkerManager(){
/**
 * @description: 构造函数
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
  * description: 展示菜单
  * param {*}
  * return {*}
  */
	cout<<"************************************"<<endl;
	cout<<"******* 欢迎使用职工管理系统！******"<<endl;
	cout<<"********** 0.退出管理程序 **********"<<endl;
	cout<<"********** 1.增加职工信息 **********"<<endl;
	cout<<"********** 2.显示职工信息 **********"<<endl;
	cout<<"********** 3.删除离职职工 **********"<<endl;
	cout<<"********** 4.修改职工信息 **********"<<endl;
	cout<<"********** 5.查找职工信息 **********"<<endl;
	cout<<"********** 6.按照编号排序 **********"<<endl;
	cout<<"********** 7.清空所有文档 **********"<<endl;
	cout<<"************************************"<<endl;
}
void WorkerManager::exitSystem(){
	cout<<"欢迎下次使用！"<<endl;
	system("pause");
	exit(0);
}

void WorkerManager::AddEmp(){
/** 
 * description: 添加职工
 * param 
 * return {*}
 */
	cout<<"请输入添加职工的数量："<<endl;

	int addNum=0;//保存用户的输入数量
	cin>>addNum;
	if(addNum>0){
		//添加
		//计算添加新空间大小
		int newSize=this->m_EmpNum+addNum;

		//开辟新空间
		Worker ** newSpace = new Worker *[newSize];

		//拷贝原来的数据
		if(this->m_EmpArr!=NULL){
			for(int i=0;i<this->m_EmpNum;i++){
				newSpace[i]=this->m_EmpArr[i];
			}
		}
		//批量添加
		for(int i=0;i<addNum;i++){
			int id;
			string name;
			int dId;

			cout<<"请输入第"<<i+1<<"个职工的编号："<<endl;
			cin>>id;
			cout<<"请输入第"<<i+1<<"个职工的姓名："<<endl;
			cin>>name;
			cout<<"请输入第"<<i+1<<"个职工的部门编号："<<endl;
			cout<<"1.普通职员"<<endl;
			cout<<"2.经理"<<endl;
			cout<<"3.老板"<<endl;
			cout<<"请输入对应数字："<<endl;
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
			//将创建的职工指针保存到数组
			newSpace[this->m_EmpNum+i]=worker;
		}
		//释放原有空间
		delete[]this->m_EmpArr;
		//更改新空间指向
		this->m_EmpArr=newSpace;
		//更新职工人数
		this->m_EmpNum=newSize;
		cout<<"成功添加了"<<addNum<<"名新职工"<<endl;
		
	}

	else{
		cout<<"输入有误，请检查"<<endl;
	}
	system("pause");
	system("cls");
}