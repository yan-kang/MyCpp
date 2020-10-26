//
//  main.cpp
//  类和对象
//
//  Created by kang on 2020/10/23.
//

#include "class.h"
#include "../../lib/mytool.h"
#include "构造函数和析构函数.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    ClassA ca;
    ClassA *cca = new ClassA;
    ca.setA(10);
    cca->setA(20);
    cout<<ca.getA()<<endl;
    cout<<cca->getA()<<endl;
    
    //通过圆类 创建具体的圆（对象）
    //实例化  通过一个类 创建一个对象的过程
    Circle c;
    c.setM_R(2);
    cout<< c.calculateZC()<<endl;
    //pause();
    Student stu;
    stu.setName("张三");
    stu.setNO("20161414");
    cout<<stu.getName()<<" "<<stu.getNo()<<endl;
    Student * stu1 = new Student;
    stu1->setName("李四");
    stu1->setNO("20171414");
    cout<<stu1->getName()<<" "<<stu1->getNo()<<endl;
    delete stu1;
    cout<<stu1->getName()<<" "<<stu1->getNo()<<endl;
    Student * stu2 = new Student;
    stu1->setName("王五");
    stu1->setNO("20181414");
    cout<<stu2->getName()<<" "<<stu1->getNo()<<endl;
    delete stu2;
    cout<<stu1->getName()<<" "<<stu1->getNo()<<endl;
    cout<<stu2->getName()<<" "<<stu1->getNo()<<endl;
    
    Person p1;
    p1.m_Name = "张三";
    //p1.m_Car = "dd";//错误 不可访问
    //p1.m_Psswd = "jhjg";//错误 不可访问
    
    //C1 c1;
    //c1.m_A = 100; //错误 类成员默认私有 不可访问
    C2 c2;
    c2.m_A = 100; //正确 结构体成员默认公有 可访问
    //c2.m_A2 = 100;//错误 因为设置了私有
    
    PPerson pp1;
    pp1.setName("张三");
    pp1.getName();
    pp1.getAge();
    //pp1.age = 0;//错误 私有成员不可访问
    pp1.setLover("李四");
    
    pp1.setNo(10);
    cout<<pp1.getNo()<<endl;
    pp1.setNo(188);
    cout<<pp1.getNo()<<endl;
    
    Cube cube;
    cube.setW(10);
    cube.setL(10);
    cube.setH(10);
    cout<<cube.caculateS()<<" "<<cube.caculateV()<<endl;
    
    bool isSame(Cube &c1,Cube &c2);
    Cube cube1;
    cube1.setW(10);
    cube1.setL(10);
    cube1.setH(10);
    cout<<cube.caculateS()<<" "<<cube.caculateV()<<endl;
    
    if(isSame(cube, cube1)){
        cout<<"两个立方体相等"<<endl;
    }
    else{
        cout<<"不相等"<<endl;
    }
    if(cube1.isSameByClass(cube)){
        cout<<"两个立方体相等"<<endl;
    }
    else{
        cout<<"不相等"<<endl;
    }
    
    //点圆位置
    Point point;
    Point center;
    Circle1 circle1;
    circle1.setR(10);
    point.setX(10);
    point.setY(9);
    center.setX(10);
    center.setY(0);
    circle1.setCenter(center);
    circle1.theLoca(point);
    
    Per *per = new Per;//对象创建 构造函数自动调用调用
    delete per;//对象销毁 析构函数自动调用
    
    //构造函数调用分类
    //1.括号法
//    Per1 p11;//默认构造函数调用
    Per1 p12(10);//有参构造调用
    Per1 p13(p12);//拷贝构造调用
    cout<<p12.age<<" "<<p13.age<<endl;
    //注意:
    //调用默认构造函数不能加()  Per1 p();被编译器认为是返回类型为Per的函数声明
    cout<<p12.age<<endl;
    cout<<p13.age<<endl;
    //2.显示法
    Per1 p111;
    Per1 p112 = Per1(20);
    Per1 p113 = Per1(p112);
    Per1(10);//匿名对象  执行完立即被释放
    cout<<"test"<<endl;
    //注意:
    //不要利用拷贝构造函数初始化匿名对象  编译器认为 Per1(p1) === Per1 p1;
    //3.隐式法
    Per1 p121 = 10;//等价于Per1 p121 = Per1(10);
    Per1 p122 = p121;//等价于Per 122 = Per1(p121);

    return 0;
}

bool isSame(Cube &c1,Cube &c2){
    if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()){
        return true;
    }
    else{
        return false;
    }
}
