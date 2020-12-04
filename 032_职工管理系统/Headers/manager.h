/** 
 * Author: kang
 * Date: 2020-12-04 22:51:17
 * LastEditors: kang
 * LastEditTime: 2020-12-04 22:51:17
 * FilePath: \032_职工管理系统\Headers\manager.h
 * Description: 
 */
#pragma once
#include "worker.h"
//经理类
class Manager:public Worker
{
private:
    /* data */
public:
    Manager(int id,string name,int dId);
    ~Manager();
    virtual void showInfo();//显示个人信息
	virtual string getDeptName();//获取部门名字
};
