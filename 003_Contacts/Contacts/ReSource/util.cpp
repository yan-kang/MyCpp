//
//  util.cpp
//  Contacts
//
//  Created by kang on 2020/10/20.
//
#include "../Headers/util.h"

extern Addressbooks addb;
//暂停功能，键入之后清屏
void pause(){
    cout<<"请按任意键继续...";
    if(getchar()){
        getchar();
    }
    system("clear");
}

//显示菜单
void showMenue(){
    cout<<"*****\t*************\t*****"<<endl;
    cout<<"*****\t1、添加联系人   *****"<<endl;
    cout<<"*****\t2、显示联系人   *****"<<endl;
    cout<<"*****\t3、删除联系人   *****"<<endl;
    cout<<"*****\t4、查找联系人   *****"<<endl;
    cout<<"*****\t5、修改联系人   *****"<<endl;
    cout<<"*****\t6、清空联系人   *****"<<endl;
    cout<<"*****\t0、退出通讯录   *****"<<endl;
    cout<<"*****\t*************\t*****"<<endl;
}

//选择功能
void selectAction(int select){
    switch (select) {
        case 1:
            //添加联系人
            addPerson(&addb);
            break;
        case 2:
            //显示联系人
            showPerson(&addb);
            break;
        case 3:
            //删除联系人
            deletePerson(&addb);
            break;
        case 4:
            //查找联系人
            findPerson(&addb);
            break;
        case 5:
            //修改联系人
            updatePerson(&addb);
            break;
        case 6:
            //清空联系人
            clearPerson(&addb);
            break;
        case 0:
            //退出通讯录
            quit();
            break;;
        default:
            break;
    }
    
}

//退出系统
void quit(){
    cout<<"欢迎下次使用!Bye..."<<endl;
    pause();
    exit(0);
}

//添加联系人
void addPerson(Addressbooks * addb){
    if(addb->m_Size == MAX){
        cout<<"通讯录已满，无法再添加！"<<endl;
        return;
    }
    else{
        //姓名
        cout<<"请输入联系人姓名："<<endl;
        string name;
        cin>>name;
        addb->m_Size++;
        addb->personArr[addb->m_Size].m_Name=name;
        
        //性别
        cout<<"请输入联系人性别："<<endl;
        cout<<"1 --- 男"<<endl;
        cout<<"2 --- 女"<<endl;
        int sex;
        while(true){
            cin>>sex;
            if(1 == sex || 2 == sex){
                addb->personArr[addb->m_Size].m_Sex=sex;
                break;
            }
            else{
                cout<<"输入有误，请重新输入！"<<endl;
            }
        }
        
        //年龄
        cout<<"请输入联系人年龄："<<endl;
        int age =0;
        while(scanf("%d",&age) != 1){
            cout<<"输入有误，请输入整数！"<<endl;
        }
        addb->personArr[addb->m_Size].m_Age=age;
        //电话
        cout<<"请输入联系人电话："<<endl;
        string phone;
        cin>>phone;
        addb->personArr[addb->m_Size].m_Phone=phone;
        
        //地址
        cout<<"请输入联系人住址："<<endl;
        string addr;
        cin>>addr;
        addb->personArr[addb->m_Size].m_Addr=addr;
        
        cout<<"添加成功！"<<endl;
        pause();
    }
}

//显示联系人
void showPerson(Addressbooks * addb){
    if(0 == addb->m_Size){
        cout<<"当前记录为空"<<endl;
    }
    else{
        for(int i=1;i<=addb->m_Size;i++){
            cout<<i<<". ";
            cout<<"姓名："<<addb->personArr[i].m_Name<<"\t";
            cout<<"性别："<<(addb->personArr[i].m_Sex == 1 ? "男" : "女")<<"\t";
            cout<<"年龄："<<addb->personArr[i].m_Age<<"\t";
            cout<<"电话："<<addb->personArr[i].m_Phone<<"\t";
            cout<<"住址："<<addb->personArr[i].m_Addr<<endl;
        }
    }
    pause();
}

//查询是否存在
int isExist(Addressbooks * addb,string name){
    for(int i=1;i<=addb->m_Size;i++){
        if(addb->personArr[i].m_Name == name){
            return i;
        }
    }
    return -1;
}

//删除联系人
void deletePerson(Addressbooks *addb){
    cout<<"请输入需要删除的联系人名字："<<endl;
    string name;
    cin>>name;
    int ret = isExist(addb, name);
    if(-1 == ret){
        cout<<"你的通讯录没有这个人！"<<endl;
    }
    else
    {
        //删除，数据前移一位即可
        for(int i=ret;i<=addb->m_Size;i++){
            addb->personArr[i]=addb->personArr[i+1];
            addb->m_Size--;
            cout<<"删除成功！"<<endl;
        }
    }
    pause();
}

//查找
void findPerson(Addressbooks * addb){
    cout<<"请输入需要查找的联系人名："<<endl;
    string name;
    cin>>name;
    int ret = isExist(addb, name);
    if(-1 == ret){
        cout<<"你的通讯录没有这个人！"<<endl;
    }
    else{
        cout<<"姓名："<<addb->personArr[ret].m_Name<<"\t";
        cout<<"性别："<<(addb->personArr[ret].m_Sex == 1 ? "男" : "女")<<"\t";
        cout<<"年龄："<<addb->personArr[ret].m_Age<<"\t";
        cout<<"电话："<<addb->personArr[ret].m_Phone<<"\t";
        cout<<"住址："<<addb->personArr[ret].m_Addr<<endl;
    }
    pause();
}

//修改联系人信息
void updatePerson(Addressbooks * addb){
    cout<<"请输入需要修改的联系人名字："<<endl;
    string name;
    cin>>name;
    int ret = isExist(addb, name);
    if(-1 == ret){
        cout<<"你的通讯没有这个人！"<<endl;
    }
    else{
        cout<<"请输入新信息，0表示当前项无需修改!"<<endl;
        //姓名
        cout<<"请输入联系人姓名："<<endl;
        string name;
        cin>>name;
        if("0" != name){
            addb->personArr[ret].m_Name=name;
        }
        
        //性别
        cout<<"请输入联系人性别："<<endl;
        cout<<"1 --- 男"<<endl;
        cout<<"2 --- 女"<<endl;
        int sex;
        while(true){
            cin>>sex;
            if(1 == sex || 2 == sex){
                addb->personArr[ret].m_Sex=sex;
                break;
            }
            else if (0 == sex){
                break;
            }
            else{
                cout<<"输入有误，请重新输入！"<<endl;
            }
        }
        
        //年龄
        cout<<"请输入联系人年龄："<<endl;
        int age =0;
        while(scanf("%d",&age) != 1){
            cout<<"输入有误，请输入整数！"<<endl;
        }
        if(0 != age){
            addb->personArr[ret].m_Age=age;
        }
        
        //电话
        cout<<"请输入联系人电话："<<endl;
        string phone;
        cin>>phone;
        if("0" != phone){
            addb->personArr[ret].m_Phone=phone;
        }
        
        //地址
        cout<<"请输入联系人住址："<<endl;
        string addr;
        cin>>addr;
        if("0" != addr){
            addb->personArr[ret].m_Addr=addr;
        }
        
        cout<<"修改成功！"<<endl;
        pause();
    }
}

//清除联系人
void clearPerson(Addressbooks * addb){
    cout<<"请确认是否清除所有联系人，数据不可恢复！(y/n)"<<endl;
    string ack;
    cin>>ack;
    if("y" == ack || "Y" == ack || "yes" == ack || "Yes" == ack){
        *(addb) = {0};
        cout<<"通讯录清除成功！"<<endl;
    }
    else{
        cout<<"取消操作！"<<endl;
    }
    pause();
}
