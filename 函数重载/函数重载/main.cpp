//
//  main.cpp
//  函数重载
//
//  Created by kang on 2020/10/23.
//

#include <iostream>
using namespace std;

//函数重载
//函数名可以相同，提高复用性

//函数重载满足的条件
//1.同一作用域下
//2.函数名称相同
//3.函数参数类型或个数或顺序不同
void func(){
    cout<<"func()"<<endl;
}
void func(int a){
    cout<<"func(int a)"<<endl;
}
void func(int a,double b){
    cout<<"func(int a,double b)"<<endl;
}
void func(double a,int b){
    cout<<"func(double a,int b)"<<endl;
}

//注意事项
//1.函数的返回值不可以作为函数重载的条件
//int func(int a){//无法重载仅以返回值区分的函数类型
//    cout<<"func(int a)"<<endl;
//}

//2.引用作为重载的条件
void func1(int &a){
    cout<<"func1(int &a)"<<endl;
}

void func1(const int &a){
    cout<<"func1(const int &a)"<<endl;
}
//3.函数重载碰到默认参数
void func2(int a,int b = 10){
    cout<<"func2(int a)"<<endl;
}
void func2(int a){
    cout<<"func2(int a = 0)"<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    func();
//    func(10);
//    func(2,3.14);
//    func(3.2,1);
//    int a = 10;
//    func1(a);//调用func1(int &a)
//    func1(10);//调用func1(const int &a) 不调用上一个是因为 int &a = 10;不合法
//    func2(10);//出错,出现二义性，传入2个参数时可以
    return 0;
}
