//
//  class.h
//  类和对象
//
//  Created by kang on 2020/10/23.
//

#ifndef class_h
#define class_h
#include <iostream>
using namespace std;
#include <string>

//类中的属性和行为统称为成员
//属性 成员属性 成员变量
//行为 成员函数 成员方法
class ClassA {
private:
    int a;
    
public:
    void setA(int a);
    int getA();

};

#define PI 3.14
//设计一个圆类，求圆的周长
class Circle {
    //私有权限
private:
    double m_r;//半径
    //公有权限
public:
    void setM_R(int r);
    double calculateZC();
};

class Student {
private:
    string name;
    string sNo;
public:
    void setName(string name);
    void setNO(string sNo);
    string getName();
    string getNo();
};

//访问权限
//1.公共权限 public     成员 类内可以访问  类外可以访问
//2.保护权限 protected  成员 类内可以访问  类外不可访问  子类可以访问
//3.私有权限 private    成员 类内可以访问  类外不可访问  子类不可访问
class Person {
private:
    //私有权限
    string m_Psswd;
public:
    //公共权限
    string m_Name;
protected:
    //保护权限
    string m_Car;
public:
    void func();
};

//struct和class的区别
//struct默认权限为公有  class默认权限为公有
class C1{
    int m_A;
};
struct C2{
    int m_A;
private:
    int m_A2;
};

//所有成员设置私有属性的好处
//1.可以自己控制读写权限
//2.对于写可以检测数据有效性
class PPerson{
private:
    string name;//可读写
    
    int age;//只读
    
    int _no;//可读写 检测有效性
    
    string lover;//只写
public:
    void setName(string name);//写name
    string getName();//读name
    int getAge();//读age
    void setLover(string lover);
    void setNo(int _no);
    int getNo();
};

//设立立方体类
//求出立方体的面积和体积
//分别利用全局函数和成员函数判断两个立方体是否相等
class Cube{
    //属性
private:
    int m_L;
    int m_W;
    int m_H;
    
public:
    void setL(int);
    void setW(int);
    void setH(int);
    int getL();
    int getW();
    int getH();
    int caculateS();
    int caculateV();
    //利用成员函数判断是否相等
    bool isSameByClass(Cube &cube);
};

//点和圆的位置关系
//点到圆心的距离和半径的大小关系
class Point{
private:
    int x;
    int y;
public:
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();
};
class Circle1{
private:
    int m_R;
    Point center;//类成员可以是对象
public:
    void setR(int r);
    void setCenter(Point &point);
    void theLoca(Point &point);
};

#endif /* class_h */
