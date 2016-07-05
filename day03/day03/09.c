//
//  09.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    //超出范围的错误
    int i=10000000000;
    printf("%d\n",i);
    
    int a=2147483647;
    a=a+1;
    printf("%d\n",a);
    
    //两个整数相除，结果仍是整数，小数会被舍弃
    int c=5/3;
    printf("%d\n",c);
    
    long a1=2147483647L+100;
    printf("%ld\n",a1);
    
    return 0;
}