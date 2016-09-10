//
//  main.cpp
//  eg2.13
//
//  Created by fanaticheng on 16/9/10.
//  Copyright © 2016年 fanaticheng. All rights reserved.
//

#include <iostream>

int i;
const int &j=2;  //只读引用变量引用常量
int &x=++i;     //++i为左值表达式，引用正确，引用的i
int &y=i=0;
int &z=y=3;     //z也引用的i
int &f(int &v){
    return v+=5;
}    //返回一个整型引用，就是一个指针指向该整型

int main(){
    int i=0;
    const int k=10,&j=k;   //j相当于一个指针
    const int &m=2;
    const int &n=i;
    //int &x=i++;   //这样会生成匿名变量
    int &x=++i;
    int &y=++++i;
    int &z=i=4;
    int &r=z=8;
    i=3;
    x=6;
    r=12;
    ++y=10;   //先++然后再赋值    虽然y在debug中仍然是地址，但是i得值已经通过y改变了
    (z=10)=15;  //这个时候i的值也发生了改变  i=15
    (f(r)=1)=2;  //f(r)返回值为i，因此这个地方仍然改变i的值，最后i=2
}



