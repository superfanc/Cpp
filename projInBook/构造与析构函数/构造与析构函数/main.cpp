//
//  main.cpp
//  构造与析构函数
//
//  Created by fanaticheng on 16/9/15.
//  Copyright © 2016年 fanaticheng. All rights reserved.
//

#include <iostream>
#include <string.h>

struct STRING{
    char* s;
    STRING(char*);  //构造函数
    ~STRING();   //析构函数
};

STRING::STRING(char* t){
    s=(char*)malloc(strlen(t)+1);
    strcpy(s, t);
    std::cout<<"COUTTRUCT:"<<s;
    }

STRING::~STRING(){          if(s==0) return;
    std::cout<<"DECONSTRUCT:"<<s;
    free(s);
    s=0;
}
int main(){
    STRING s1("String varible 1\n");
    STRING s2("String varible 2\n");
    STRING("Constant\n");
    std::cout<<"RETURN\n";
    //s1.~STRING();//手动析构s1
    }
