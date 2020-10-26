//
//  util.h
//  Contacts
//
//  Created by kang on 2020/10/20.
//

#ifndef util_h
#define util_h
#include <iostream>
using namespace std;
#include <string>

#define MAX 1000//通讯录最大人数

void pause();//暂停功能

void showMenue();//显示菜单

void selectAction(int select);//选择功能

void quit();//退出系统

//联系人结构体
struct Person{
    string m_Name;//姓名
    int m_Sex;//性别
    int m_Age;//年龄
    string m_Phone;//联系电话
    string m_Addr;//地址
};

//通讯录结构体
struct Addressbooks{
    int m_Size;//通讯录中保存人数
    Person personArr[MAX];//通讯录中保存的联系人数组
};

void addPerson(Addressbooks * addb);//添加联系人

void showPerson(Addressbooks * addb);//显示联系人

void deletePerson(Addressbooks * addb);//删除联系人

void findPerson(Addressbooks * addb);//查找联系人

void updatePerson(Addressbooks * addb);//修改联系人

void clearPerson(Addressbooks * addb);//清除联系人

int isExist(Addressbooks * addb,string name);


#endif /* util_h */
