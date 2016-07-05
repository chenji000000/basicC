//
//  07.c
//  day02
//
//  Created by student on 15-9-1.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a;//定义变量时未经初始化，变量中将保存的是垃圾值
    printf("%d\n",a);
    int b;
    b=a+10;
    
    int a1=10;
    printf("%d\n",a1);
    b=a1+10;
    printf("b=%d\n",b);
    
    float f=10.23;
    printf("%f\n",f);
    printf("%g\n",f);
    
    double d=1.234567;
    printf("%f\n",d);
    
    return 0;
}