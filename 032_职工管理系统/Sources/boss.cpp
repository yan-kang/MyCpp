/** 
 * Author: kang
 * Date: 2020-12-04 23:00:07
 * LastEditors: kang
 * LastEditTime: 2020-12-04 23:15:05
 * FilePath: \032_ְ������ϵͳ\Sources\boss.cpp
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
    //��ʾ������Ϣ
    cout<<"ְ��ID��"<<this->m_Id
		<<"\tְ�����֣�"<<this->m_Name
		<<"\t��λ��"<<this->getDeptName()
		<<"\tְ�𣺹���˾��������"<<endl;
}
string Boss::getDeptName(){
    //��ȡ��������
    return string("�ϰ�");
}