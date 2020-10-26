//
//  class.cpp
//  类和对象
//
//  Created by kang on 2020/10/23.
//

#include "class.h"

void ClassA::setA(int a){
    this->a = a;
}

int ClassA::getA(){
    return a;
}

void Circle::setM_R(int r){
    m_r = r;
}
double Circle::calculateZC(){
    return 2 * PI * m_r;
}

void Student::setName(string name){
    this->name = name;
}
void Student::setNO(string sNo){
    this->sNo = sNo;
}
string Student::getName(){
    return name;
}
string Student::getNo(){
    return sNo;
}

void PPerson::setName(string name){
    this->name = name;
}
string PPerson::getName(){
    return name;
}
int PPerson::getAge(){
    age = 18;
    return age;
}
void PPerson::setLover(string lover){
    this->lover = lover;
}
void PPerson::setNo(int _no){
    if(_no < 0 || _no > 150){
        this->_no = -1;
        cout<<"数据错误"<<endl;
        return;
    }
    this->_no = _no;
}
int PPerson::getNo(){
    return _no;
}


void Cube::setH(int high){
    m_H = high;
}
void Cube::setL(int _long){
    m_L = _long;
}
void Cube::setW(int widgth){
    m_W = widgth;
}
int Cube::getH(){
    return m_H;
}
int Cube::getL(){
    return m_L;
}
int Cube::getW(){
    return m_W;
}
int Cube::caculateS(){
    return 2 * m_L*m_W+2*m_L*m_H+2*m_W*m_H;
}
int Cube::caculateV(){
    return m_W*m_L*m_H;
}
bool Cube::isSameByClass(Cube &cube){
    if(getL() == cube.getL() && getW() == cube.getW() && getH() == cube.getH()){
        return true;
    }
    return false;
}

void Point::setX(int x){
    this->x = x;
}
void Point::setY(int y){
    this->y = y;
}
int Point::getX(){
    return x;
}
int Point::getY(){
    return y;
}
void Circle1::setR(int r){
    this->m_R = r;
}
void Circle1::setCenter(Point &point){
    this->center = point;
}
void Circle1::theLoca(Point &point){
    int distance = (center.getX() - point.getX())  *(center.getX() - point.getX())+
    (center.getY() - point.getY()) * (center.getY() - point.getY());
    int R_2 = (this->m_R) * (this->m_R);
    if(distance == R_2){
        cout<<"点在圆上"<<endl;
    }
    else if(distance < R_2){
        cout<<"点在圆内"<<endl;
    }
    else{
        cout<<"点在圆外"<<endl;
    }
}
