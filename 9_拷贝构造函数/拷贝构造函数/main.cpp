//
//  main.cpp
//  拷贝构造函数
//
//  Created by kang on 2020/10/24.
//

#include <iostream>
using namespace std;

class Person{
private:
    int age;
public:
    int getAge(){
        return age;
    }
    Person(){
        cout<<"默认构造"<<endl;
    }
    Person(int a){
        age = a;
        cout<<"有参构造"<<endl;
        
    }
    Person(const Person &p){
        age = p.age;
        cout<<"拷贝构造"<<endl;
    }
    ~Person(){
        cout<<"析构函数"<<endl;
    }
};
//1.使用已创建对象初始化新对象
void test1(){
    Person p1(10);
    Person p2(p1);
    cout<<p1.getAge()<<" "<<p2.getAge()<<endl;
}
//2.值传递方式给函数传参
void doWork(Person p){
    
}
void test2(){
    Person p;
    doWork(p);//实参给形参传递数据时会调用拷贝函数
}
//3.以值的方式返回局部对象  编译器不同可能不会调用
Person doWork1(){
    Person p;
    cout<<"aa"<<endl;
    return p;
}
void test3(){
    cout<<"aa"<<endl;
    Person p = doWork1();//值方式返回局部变量会调用拷贝构造  编译器优化可能不需要
    cout<<"aa"<<endl;
}

//深拷贝与浅拷贝
class Test{
public:
    Test(){
        cout<<"默认构造"<<endl;
    }
    Test(int a,int h){
        age = a;
        height = new int(h);
        cout<<"有参构造"<<endl;
    }
    int age;
    int * height;
    //深拷贝 解决堆内存重复释放问题
    Test(const Test &t){
        cout<<"拷贝构造"<<endl;
        age = t.age;
        //height = t.height;默认提供的代码 危
        height = new int(*t.height);
    }
    ~Test(){
        //将堆区开辟的数据释放
        if(height != NULL){
            delete height;
            height = NULL;
        }
        cout<<"析构函数"<<endl;
    }
};
void test01(){
    Test t1(18,166);
    cout<<t1.age<<" "<<*t1.height<<endl;
    Test t2(t1);
    cout<<t2.age<<" "<<*t2.height<<endl;//使用默认拷贝 堆区内存将被重复释放 非法操作
}


int main(int argc, const char * argv[]) {
    // insert code here...
    //test1();
    //test2();
    //test3();
    test01();
    return 0;
}
