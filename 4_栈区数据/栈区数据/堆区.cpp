//
//  堆区.cpp
//  栈区数据
//
//  Created by kang on 2020/10/25.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int * func(){
    int *p = new int(10);//在堆区创建一个整型数据
    int *p1 = new int;
    *p1 = 222;
    cout<<*p1<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    return p;
}
void test1(){
    int *p = func();
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    delete p;
    //堆区数据在程序结束前不会被主动释放，只能手动释放
    //delete之后内存被释放，但不一定会马上被覆盖，只是处于可用状态
    
    cout<<*p<<endl;
    new int(20);
    cout<<*p<<endl;
}

void test2(){
    //堆区创建10个数据的整型数组
    int * arr = new int[10];//()里是数 []里表示数组大小
    for(int i=0;i < 10;i ++){
        arr[i]=i + 100;
        
    }
    for(int i=0;i < 10;i ++){
        cout<<arr[i]<<endl;
    }
    delete [] arr;
    int * arr1 = new int[10];
    for(int i=0;i < 10;i ++){
        arr1[i]=i + 200;
        
    }
    for(int i=0;i < 10;i ++){
        cout<<arr[i]<<endl;
        cout<<arr1[i]<<endl;
    }
    delete [] arr1;
}

int main(){
    test1();
    test2();
}
