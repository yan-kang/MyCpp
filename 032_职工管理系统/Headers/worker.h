/** 
 * Author: kang
 * Date: 2020-11-19 00:13:39
 * LastEditors: kang
 * LastEditTime: 2020-11-30 20:48:42
 * FilePath: \my-cpp\032_职工管理系统\Headers\worker.h
 * Description: 职工抽象类
 */
#pragma once
#include <iostream>
using namespace std;

class Worker
{
public:
	virtual void showInfo()=0;//显示个人信息
	virtual string getDeptName()=0;//获取部门名字

	int m_Id;//职工ID
	string m_Name;//职工姓名
	int m_DeptId;//职工部门编号
	
};