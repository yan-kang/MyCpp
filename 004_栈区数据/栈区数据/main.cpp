//
//  main.cpp
//  栈区数据
//
//  Created by kang on 2020/10/25.
//

#include <iostream>
using namespace std;

int * func(int b){
    cout<<&b<<endl;
    b = 100;
    int a = 10;//局部变量 栈区数据在函数执行完后自动释放
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<a<<endl;
    return &a;//返回局部变量地址，非法操作
}

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    int * p = func(1);
//    cout<<*p<<endl;//第一次打印正确 因为编译器保留了一次
//    cout<<p<<endl;
//    cout<<*p<<endl;
//    return 0;
//}
