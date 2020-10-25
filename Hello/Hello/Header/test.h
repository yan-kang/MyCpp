//
//  test.h
//  Hello
//
//  Created by kang on 2020/10/16.
//

#ifndef test_h
#define test_h
#include <iostream>
using namespace std;
class Test{
private:
    int age;
public:
    int setAge(int age);
    int getAge(int age);
    void test(int n,const char * str[]);
    static void stest();//静态函数
};

#endif /* test_h */
