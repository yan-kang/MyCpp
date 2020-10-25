//
//  main.cpp
//  Hello
//
//  Created by kang on 2020/10/16.
//
#include "../Header/test.h"

int main(int argc, const char * argv[]) {
    //cout<<argv[1]<<endl;
    const char * str1[3]={"你好","Who are you?","你在干嘛"};
    const char * p1[3]={str1[0],str1[1],str1[2]};
    for(int i=0;i<3;i++){
        cout<<p1[i]<<" "<<*(p1+i)<<endl;
    }
    char str2[3][10]={"ddd","hhh","ss"};
    char *p[3];
    p[0]=str2[0];
    p[1]=str2[1];
    p[2]=str2[2];
    for(int i=0;i<3;i++){
        cout<<*(p+i)<<endl;
    }
    Test::stest();
    Test tt;
    tt.test(3, str1);//1
    Test *t=new Test;
    t->test(3, str1);//2
    (*t).test(3, str1);//3 1、2、3等价，但需注意的是2，3是通过地址调用
    string str;
    cout<<"Please input the string"<<endl;
    cin>>str;
    cout<<str<<endl;
    return 0;
}

