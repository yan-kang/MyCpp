//
//  main.cpp
//  函数提高
//
//  Created by kang on 2020/10/23.
//

#include <iostream>
using namespace std;

//函数参数默认值
//传入参数则使用传入数据，否则使用默认值
//语法：返回值类型 函数名（形参 = 默认值）{}
int func(int a,int b = 10,int c = 20){
    return a+b+c;
}

//注意：1.如果某个位置有了默认值，则其后的参数都必须有默认值
//int func2(int a,int b = 0;int c);//错误，c必须有默认值
//2.如果函数声明有默认参数，则函数实现不可再有默认值，声明和实现只能有其一可有默认值
int func3(int a,int b = 10);
//int func3(int a,int b = 10){//错误，不可重定义默认参数,二义性
int func3(int a = 1,int b){
    return a+b;
}

//占位参数
//返回值类型 函数名（数据类型）{}
//占位参数也可以有默认值
void func4(int a,int){
    cout<<"Nice!"<<endl;
}

void func5(int);
void func5(int a){
    cout<<a<<endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    cout<<func(10)<<endl;
//    cout<<func(10,20,30)<<endl;
//    cout<<func3()<<endl;
    
    func4(2,3);
    func5(5);
    return 0;
}
