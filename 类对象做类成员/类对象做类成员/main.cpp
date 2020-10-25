//
//  main.cpp
//  类对象做类成员
//
//  Created by kang on 2020/10/24.
//

#include <iostream>
using namespace std;

class Test1{
public:
    string _1name;
    Test1(string name){
        _1name = name;
        cout<<"test1的构造"<<endl;
    }
    ~Test1(){
        cout<<"test1析构"<<endl;
    }
};
class Test2{
public:
    string _2name;
    Test1 test;
    Test2(string name,string name1):_2name(name),test(name1)//等价Test1 test = name1
    {
        cout<<"test2构造"<<endl;
    }
    ~Test2(){
        cout<<"test2析构"<<endl;
    }
};
//当其他类对象作为本类成员 构造时先构造成员对象再构造自身 析构顺序相反
void test01(){
    Test2 t("张三","iPhone");
    cout<<t._2name<<" have a "<<t.test._1name<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    test01();
    return 0;
}
