/** 
 * Author: kang
 * Date: 2020-11-18 23:16:13
 * LastEditors: kang
 * LastEditTime: 2020-11-30 20:45:42
 * FilePath: \my-cpp\032_职工管理系统\Sources\workerManager.cpp
 * Description: 管理类
 */

#include "../Headers/workerManager.h"

WorkerManager::WorkerManager(){
/**
 * @description: 构造函数
 * @param {*}
 * @return {*}
 */
}
WorkerManager::~WorkerManager(){

}
void WorkerManager::showMenu(){
	/**
	 * 展示菜单函数
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