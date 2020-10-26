//
//  main.cpp
//  quanju
//
//  Created by kang on 2020/10/21.
//

#include <iostream>
using namespace std;
int g_a = 0;//全局区
const int c_g_a = 0;//全局区

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    int a=0;//不在全局区
    static int s_a = 0;//全局区
    cout<<"局部变量地址："<<&a<<endl;
    cout<<"全局变量地址："<<&g_a<<endl;
    cout<<"静态变量地址："<<&s_a<<endl;
    cout<<"字符串常量地址："<<&"HELLO"<<endl;//全局区
    const int c_l_a = 0;//不在全局区
    const string c_l_s = "hello";//不在全局区
    cout<<"const修饰的变量地址(int)："<<&c_l_a<<endl;
    cout<<"const修饰的变量地址(string)："<<&c_l_s<<endl;
    cout<<"const修饰的全局变量地址："<<&c_g_a<<endl;
    return 0;
}
