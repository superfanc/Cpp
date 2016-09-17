//
//  main.cpp
//  QUEUE
//
//  Created by fanaticheng on 16/9/17.
//  Copyright © 2016年 fanaticheng. All rights reserved.
//

#include <iostream>
class QUEUE{
    char* queue;
    int size,front,rear;
public:
    int insert(char elem);
    int remove(char &elem);
    QUEUE (int size);
    ~QUEUE(void);
};

QUEUE::QUEUE(int sz){
    queue = new char[size=sz];//size在class里面定义了的,queue指向首地址
    front=0;   //第一个元素的位置
    rear=0;   //最后一个元素的位置
}

QUEUE::~QUEUE(void){
    if(queue){
        delete queue;
        queue=0;
        front=0;
        rear=0;
    }
}

int QUEUE::insert(char elem){
    if((rear-front)==size) return 0;
    queue[rear++]=elem;
    return 1;
}

int QUEUE::remove(char &elem){
    if(front==rear) return 0;
    elem=queue[front=front+1];
    return 1;
}

int main(){
    QUEUE queue(20); //20个元素的queue
}
