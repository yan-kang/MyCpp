/** 
 * Author: kang
 * Date: 2020-12-04 22:51:25
 * LastEditors: kang
 * LastEditTime: 2020-12-04 23:15:42
 * FilePath: \032_ְ������ϵͳ\Sources\manager.cpp
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
    //��ʾ������Ϣ
    cout<<"ְ��ID��"<<this->m_Id
		<<"\tְ�����֣�"<<this->m_Name
		<<"\t��λ��"<<this->getDeptName()
		<<"\tְ������ϰ��·����񣬲����·��������ͨԱ��"<<endl;
}
string Manager::getDeptName(){
    //��ȡ��������
    return string("����");
}