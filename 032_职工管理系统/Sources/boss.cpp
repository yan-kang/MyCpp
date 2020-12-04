/** 
 * Author: kang
 * Date: 2020-12-04 23:00:07
 * LastEditors: kang
 * LastEditTime: 2020-12-04 23:15:05
 * FilePath: \032_职工管理系统\Sources\boss.cpp
 * Description: 
 */
#include "../Headers/boss.h"
Boss::Boss(int id,string name,int dId)
{
    this->m_Id=id;
    this->m_Name=name;
    this->m_DeptId=dId;
}

Boss::~Boss()
{
}

void Boss::showInfo(){
    //显示个人信息
    cout<<"职工ID："<<this->m_Id
		<<"\t职工名字："<<this->m_Name
		<<"\t岗位："<<this->getDeptName()
		<<"\t职责：管理公司所有事务"<<endl;
}
string Boss::getDeptName(){
    //获取部门名字
    return string("老板");
}