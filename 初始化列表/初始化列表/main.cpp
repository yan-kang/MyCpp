//
//  main.cpp
//  初始化列表
//
//  Created by kang on 2020/10/24.
//

#include <iostream>
using namespace std;

class Person{
public:
    int A;
    int B;
    int C;
    //初始化列表 变量初始化
    Person(int a,int b,int c):A(a),B(b),C(c){
//        A = a;
//        B = b;
//        C = c;
    }
    //常量初始化
    Person():A(10),B(10),C(10){
        
    }
    
};
void test01(){
//    Person p1(10,10,20);
//    cout<<p1.A<<" "<<p1.B<<" "<<p1.C<<endl;
    Person p2;
    cout<<p2.A<<" "<<p2.B<<" "<<p2.C<<endl;
    Person p3(30,20,10);
    cout<<p3.A<<" "<<p3.B<<" "<<p3.C<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    test01();
    return 0;
}
