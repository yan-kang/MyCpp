//
//  main.cpp
//  引用
//
//  Created by kang on 2020/10/22.
//

#include <iostream>
using namespace std;

void test1(){
    int a = 10;
    int &b = a;//语法
    cout<<a<<endl;
    cout<<b<<endl;
    b = 20;//操作别名等价于操作原名
    cout<<a<<endl;
    cout<<b<<endl;
}

void test2(){
    //1.引用必须初始化
    int a = 10;
    //int &b; //必须初始化
    int &b = a;
    //2.初始化后不可再改变
    int c = 20;
    //&b = c;//错误
    b = c;//赋值
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}

//交换函数
//1.值传递
void swap1(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = a;
}
//2.地址传递
void swap2(int *a,int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//3.引用传递
void swap3(int &a,int &b){//此处a,b分别是实参a,b的别名
    int temp = a;
    a = b;
    b = temp;
}
void sort(int (&arr)[5]){//数组引用必须指定大小
    for(int i = 0;i < 5-1;i ++){
        for(int j = 0;j < 5-i-1;j ++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
//引用做函数返回值
//1.不要返回局部变量的引用
int &test01(){
    int a = 10;//存在于栈区
    return a;  //返回栈区局部变量数据，非法
}
//2.函数调用可做左值
int &test02(){
    static int a = 10;//静态变量，存放于全局区
    return a;
}

//常量引用
//打印数据
void showValue(const int &val){
    //val = 100;//无法修改
    cout<<val<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //test1();
    //test2();
    
    //引用做函数参数
//    int a = 10,b = 20;
//    swap1(a,b);
//    cout<<a<<endl;
//    cout<<b<<endl;
//    swap2(&a,&b);
//    cout<<a<<endl;
//    cout<<b<<endl;
//    swap3(a,b);
//    cout<<a<<endl;
//    cout<<b<<endl;
//    int &ref = test01();
//    cout<<ref<<endl;
//    cout<<ref<<endl;
//    int arr[] = {5,3,4,2,1};
//    for(int i = 0;i < 5;i ++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    sort(arr);
//    for(int i = 0;i < 5;i ++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
    
    //引用做函数返回值
//    int &ref2 = test02();
//    cout<<ref2<<endl;
//    cout<<ref2<<endl;
//    test02() = 1000;//函数返回值为引用时，函数调用可作为左值
//    cout<<ref2<<endl;
//    cout<<ref2<<endl;
    
    //引用的本质
//    int a =10;
//    int& b = a;//自带转换为int * const b = &a;指针常量不可改，所以引用不可改变
//    b = 20;//发现是引用，自动转换为*b = 20;
//    cout<<a<<endl;
//    cout<<b<<endl;
    
    //常量引用
    //用以修饰形参，防止误操作
//    int a = 10;
//    //int &b = 10;//错误 引用必须引用一块合法内存
//    const int& b = 10;//正确，将其转换为int temp = 10;const int &b = temp;
//    //b = 20;//错误，只读不可修改
//    cout<<a<<endl;
//    showValue(a);
//    cout<<a<<endl;
    
    
    return 0;
}
