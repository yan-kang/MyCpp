//
//  main.cpp
//  构造函数调用规则
//
//  Created by kang on 2020/10/24.
//

#include <iostream>
using namespace std;

//创建一个类时 C++默认添加至少三个函数
//1.默认无参构造函数 空实现
//2.默认析构函数 空实现
//3.默认拷贝函数 拷贝属性值

class Test{
private:
    int A;
public:
    void setA(int a){
        A = a;
    }
    int getA(){
        return A;
    }
};
void test01(){
    Test t1;
    t1.setA(10);
    Test t2(t1);
    cout<<t1.getA()<<" "<<t2.getA()<<endl;
}
//调用规则
//1.如果定义了有参构造函数 则不会再提供默认构造函数  但会提供拷贝函数
//2.如果定义了拷贝函数 则不会再提供其他普通构造函数
int main(int argc, const char * argv[]) {
    // insert code here...
    test01();
    
    return 0;
}
