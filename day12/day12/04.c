//
//  04.c
//  day12
//
//  Created by student on 15-9-16.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

void fa()
{
    printf("in function fa\n");
}

void fb()
{
    printf("in function fb\n");
}

void invoke(void (*f)())//回调
{
    printf("调用传进来的函数\n");
    f();
}

int main()
{
    printf("%p\n",fa);//函数名也是一个常量地址，它指向该函数的第一条语句的地址
    
    void (*pfa)();//定义了一个函数指针，其中pfa为指针变量名
    pfa=fa;
    pfa();
    pfa=fb;
    pfa();
    
    invoke(fa);
    
    invoke(fb);
    
    return 0;
}
