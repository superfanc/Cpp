//
//  main.cpp
//  new&delete
//
//  Created by fanaticheng on 16/9/19.
//  Copyright © 2016年 fanaticheng. All rights reserved.
//

#include <iostream>
class ARRAY{
    int *a;
    int r,c;
public:
    ARRAY(int x,int y);
    ~ARRAY();
};

ARRAY::ARRAY(int x,int y){
    a=new int[(r=x)*(c=y)];
}

ARRAY::~ARRAY(){
    if(a){
        delete a;
        a=0;     //a指向空指针
    }
}
ARRAY x(3,5);   //这里必须有x
int main(int argc, const char * argv[]) {
    // insert code here...
    int error=0;
    ARRAY y(3,5),*p;
    p=new ARRAY(5,7);     //p->a又开辟了新的35个int空间
    switch(error){
        case 0:
            delete p;
            return 0;//用return最好，可以防止内存泄漏
        case 1:
            delete p;
            exit(1);
        case 2:
            delete p;
            abort();
    }
    delete p;
}
