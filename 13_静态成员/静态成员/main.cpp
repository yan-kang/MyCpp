//
//  main.cpp
//  静态成员
//
//  Created by kang on 2020/10/24.
//

#include <iostream>
using namespace std;
//静态成员函数
//所有对象共享一个函数
//只能访问静态成员变量
class Test{
public:
    static void fun(){
        t_A = 100;
        //t_B = 100;//错误 不可访问非静态成员变量
        cout<<"staic函数调用"<<endl;
    }
    static int t_A;
    int t_B;
private:
    //静态成员函数也有访问权限
    static void fun2(){
        
    }
};
int Test::t_A = 0;

//有两种访问方式
void test01(){
    cout<<Test::t_A<<endl;
    //1.通过对象访问
    Test t;
    t.fun();
    //通过类名访问
    Test::fun();
    cout<<Test::t_A<<endl;
    
    //Test::fun2();//错误 类外不可访问私有静态成员
}
int main(int argc, const char * argv[]) {
    // insert code here...
    test01();
    return 0;
}
