//
//  main.cpp
//  this指针
//
//  Created by kang on 2020/10/24.
//

#include <iostream>
using namespace std;
//1.解决名称冲突
class Test1{
public:
    Test1(int age){
        //this指针指向被调用函数所属对象
        this->age = age;
    }
    void ageAdd(Test1 &p){
        this->age += p.age;
    }
    Test1& ageAdd1(Test1 &t){//引用的方式返回 值方式返回会创建一个新对象
        this->age += t.age;
        return *this;
    }
    int age;
};
void test01(){
    Test1 t(18);
    cout<<t.age<<endl;
}
//2.返回对象本身用retrun *this;
void test02(){
    Test1 t1(10);
    Test1 t2(18);
    t2.ageAdd(t1);
    t2.ageAdd(t1);
    cout<<t1.age<<" "<<t2.age<<endl;
    //链式编程
    t2.ageAdd1(t1).ageAdd1(t1).ageAdd1(t1);
    cout<<t2.age<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    test01();
    test02();
    return 0;
}
