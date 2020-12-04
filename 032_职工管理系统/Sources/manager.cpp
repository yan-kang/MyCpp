/** 
 * Author: kang
 * Date: 2020-12-04 22:51:25
 * LastEditors: kang
 * LastEditTime: 2020-12-04 23:15:42
 * FilePath: \032_职工管理系统\Sources\manager.cpp
 * Description: 
 */
#include "../Headers/manager.h"

Manager::Manager(int id,string name,int dId)
{
    this->m_Id=id;
    this->m_Name=name;
    this->m_DeptId=dId;
}

Manager::~Manager()
{
}

void Manager::showInfo(){
    //显示个人信息
    cout<<"职工ID："<<this->m_Id
		<<"\t职工名字："<<this->m_Name
		<<"\t岗位："<<this->getDeptName()
		<<"\t职责：完成老板下发任务，并且下发任务给普通员工"<<endl;
}
string Manager::getDeptName(){
    //获取部门名字
    return string("经理");
}