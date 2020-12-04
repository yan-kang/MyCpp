/** 
 * Author: kang
 * Date: 2020-11-16 00:11:06
 * LastEditors: kang
 * LastEditTime: 2020-11-30 20:48:54
 * FilePath: \my-cpp\032_职工管理系统\Headers\workerManager.h
 * Description: 管理类
 */
#pragma once//防止头文件重复包含
#include <iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"
class WorkerManager
{
public:
	WorkerManager();
	~WorkerManager();
	void showMenu();//展示菜单
	void exitSystem();//退出系统
	
	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker ** m_EmpArr;

	//添加职工的函数
	void AddEmp();
};