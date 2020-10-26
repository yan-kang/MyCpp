//
//  test.cpp
//  Hello
//
//  Created by kang on 2020/10/16.
//

#include "../Header/test.h"


void Test::test(int n,const char* str[]){
    for(int i=0;i<n;i++){
        cout<<str[i]<<endl;
    }
}

//静态函数，无需实例化可直接调用
void Test::stest(){
    cout<<"This is a static function!"<<endl;
}

int Test::setAge(int age){
    return age;
}

int Test::getAge(int age){
    return age;
}
