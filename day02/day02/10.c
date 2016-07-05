//
//  10.c
//  day02
//
//  Created by student on 15-9-1.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i2;
    printf("%ld\n",sizeof(i2));//sizeof是一个运算符，他能求出一个变量所占的字节数
    i2=2147483647;//2^31-1
    i2=-2147483648;//-2^31
    printf("%d\n",i2);
    return 0;
    
}
