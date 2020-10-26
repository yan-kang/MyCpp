//
//  构造函数和析构函数.hpp
//  类和对象
//
//  Created by kang on 2020/10/24.
//

#ifndef __________hpp
#define __________hpp

#include <iostream>
using namespace std;
class Per{
    //构造函数
    //没有返回值
    //函数名与类名相同
    //可以有参数，可重载
    //自动调用且只调用一次
public:
    Per();
    //析构函数
    //没有返回值
    //函数名与类名相同前面加~
    //没有参数，不可重载
    //自动调用且只调用一次
    ~Per();
};


//构造函数的分类
class Per1{
public:
    int age;
  //无参构造
    Per1(){
        cout<<"无参构造"<<endl;
    }
    //有参构造
    Per1(int a){
        age = a;
        cout<<"有参构造"<<endl;
    }
    //拷贝构造
    Per1(const Per1 &p){
        age = p.age;
        //将传入的对象所有属性拷贝
        cout<<"拷贝构造"<<endl;
    }
    ~Per1(){
        cout<<"析构函数"<<endl;
    }
};

//拷贝构造函数的调用时机
#endif /* __________hpp */
