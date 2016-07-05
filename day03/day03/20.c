//
//  20.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    //变量
    int x;
    printf("%ld\n",sizeof(x));

    
    //类型
    printf("sizeof(double)=%ld\n",sizeof(double));
    printf("sizeof(unsigned long long int)=%ld\n",sizeof(unsigned long long int));
    
    //表达式
    printf("sizeof(3+4.1*0.5)=%ld\n",sizeof(3+4.1*0.5));
    x=10;
    printf("sizeof(x=1)=%ld\n",sizeof(x=1));
    printf("x=%d\n",x);//表达式不会被运行，x的值不会被改变
    
    
    return 0;
}
