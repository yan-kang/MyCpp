/** 
 * Author: kang
 * Date: 2020-11-19 00:13:39
 * LastEditors: kang
 * LastEditTime: 2020-11-30 20:48:42
 * FilePath: \my-cpp\032_ְ������ϵͳ\Headers\worker.h
 * Description: ְ��������
 */
#pragma once
#include <iostream>
using namespace std;

class Worker
{
public:
	virtual void showInfo()=0;//��ʾ������Ϣ
	virtual string getDeptName()=0;//��ȡ��������

	int m_Id;//ְ��ID
	string m_Name;//ְ������
	int m_DeptId;//ְ�����ű��
	
};