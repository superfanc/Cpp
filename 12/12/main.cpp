//
//  main.cpp
//  12
//
//  Created by fanaticheng on 16/9/5.
//  Copyright © 2016年 fanaticheng. All rights reserved.
//
#include <stdio.h>
#include <iostream>
int main(void){
    int i,n;
    long f;
    std::cout<<"please input n:\n";
    std::cin>>n;
    for(f=i=1;i<=n;i++) f*=i;
    std::cout<<"\n"<<n;
    n=printf("%ld",f);
    std::cout<<"!=\nNumber of digits="<<n;
    char c,*pc;
    const char cc='a';
    const char *pcc;
    char *const cpc=&c;
    *cpc=*pc;
}