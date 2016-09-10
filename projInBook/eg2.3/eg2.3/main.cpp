//
//  main.cpp
//  eg2.3
//
//  Created by fanaticheng on 16/9/10.
//  Copyright © 2016年 fanaticheng. All rights reserved.
//

#include <iostream>
long sum(void){
    int m,n;
    long s=0;
    std::cout<<"please input:";
    for(std::cin>>n ,m=1; m<=n; m++) s+=m;
    std::cout<<"\nSum="<<s;
    return s;
}
long x=sum();
int main(void){}