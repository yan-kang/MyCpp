//
//  main.cpp
//  成员对象和函数分开存储
//
//  Created by kang on 2020/10/24.
//

#include <iostream>
using namespace std;
class Test{
    
};
void test01(){
    Test t;
    cout<<sizeof(t)<<endl;
    //空对象占用内存空间为1
    //C++编译器会给每个孔对象也分配一个字节空间 区分空对象占内存位置
    //每个空对象也应该有一个独一无二的内存地址
}

class Test1{
    int A;//非静态成员变量 属于对象
    static int B;//静态成员变量 不属于对象 不会改变对象占内存空间大小
    void func(){//非静态成员函数 不属于对象
    }
};
void test02(){
    Test1 t;
    cout<<sizeof(t)<<endl;//静态成员变量和所以成员函数都不占用对象的内存空间
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //test01();
    test02();
    return 0;
}
