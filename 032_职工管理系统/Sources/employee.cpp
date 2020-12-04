/** 
 * Author: kang
 * Date: 2020-11-19 00:36:59
 * LastEditors: kang
 * LastEditTime: 2020-11-30 20:45:07
 * FilePath: \my-cpp\032_职工管理系统\Sources\employee.cpp
 * Description: 职工类
 */

#include "../Headers/employee.h"

Employee::Employee(int id,string name,int dId){
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}
void Employee::showInfo(){
 /**
  * @description: 
  * @param {*}
  * @return {*}
  */
	cout<<"职工ID："<<this->m_Id
		<<"\t职工名字："<<this->m_Name
		<<"\t岗位："<<this->getDeptName()
		<<"\t职责：完成经理下发任务"<<endl;
}
string Employee::getDeptName(){
	return string("普通职员");
}