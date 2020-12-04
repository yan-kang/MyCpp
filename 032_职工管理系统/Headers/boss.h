/** 
 * Author: kang
 * Date: 2020-12-04 23:00:00
 * LastEditors: kang
 * LastEditTime: 2020-12-04 23:00:01
 * FilePath: \032_职工管理系统\Headers\boss.h
 * Description: 
 */
#pragma once
#include "worker.h"
//经理类
class Boss:public Worker
{
private:
    /* data */
public:
    Boss(int id,string name,int dId);
    ~Boss();
    virtual void showInfo();//显示个人信息
	virtual string getDeptName();//获取部门名字
};
