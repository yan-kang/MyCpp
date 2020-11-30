/** 
 * Author: kang
 * Date: 2020-11-19 00:36:59
 * LastEditors: kang
 * LastEditTime: 2020-11-30 20:48:34
 * FilePath: \my-cpp\032_职工管理系统\Headers\employee.h
 * Description: 职员类
 */
#pragma once
#include "worker.h"
class Employee:public Worker{
	public:
	Employee(int id,string name,int dId);//构造函数
	virtual void showInfo();//显示个人信息
	virtual string getDeptName();//获取部门名字
};