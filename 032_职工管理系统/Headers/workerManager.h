/** 
 * Author: kang
 * Date: 2020-11-16 00:11:06
 * LastEditors: kang
 * LastEditTime: 2020-11-30 20:48:54
 * FilePath: \my-cpp\032_ְ������ϵͳ\Headers\workerManager.h
 * Description: ������
 */
#pragma once//��ֹͷ�ļ��ظ�����
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
	void showMenu();//չʾ�˵�
	void exitSystem();//�˳�ϵͳ
	
	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker ** m_EmpArr;

	//���ְ���ĺ���
	void AddEmp();
};