/** 
 * Author: kang
 * Date: 2020-11-19 00:36:59
 * LastEditors: kang
 * LastEditTime: 2020-11-30 20:45:07
 * FilePath: \my-cpp\032_ְ������ϵͳ\Sources\employee.cpp
 * Description: ְ����
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
	cout<<"ְ��ID��"<<this->m_Id
		<<"\tְ�����֣�"<<this->m_Name
		<<"\t��λ��"<<this->getDeptName()
		<<"\tְ����ɾ����·�����"<<endl;
}
string Employee::getDeptName(){
	return string("��ְͨԱ");
}