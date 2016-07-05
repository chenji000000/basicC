//
//  05宏指令.c
//  day10
//
//  Created by student on 15-9-14.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
//#include "mystdio.h"

#define SIZE 20//定义一个宏，在程序中可以作为20使用
#define PI 3.1415926//增加可读性，增加精度
#define 布尔类型 bool
#define 真 1
#define 假 0

int main()
{
//    int a[SIZE]={1,2,3,4,5,6,7,8,9,0};
//    for(int i=0;i<SIZE;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    int max=a[0];
//    for(int i=1;i<SIZE;i++)
//    {
//    if(max<a[i])
//    {
//        max=a[i];
//    }
//    }
//    a[0]=10;
//    printf("max=%d\n",max);
//    for(int i=0;i<SIZE;i++)
//    {
//        printf("%d ",a[i]);
//    }
    
    double area=PI*5*5;
    area=PI*6*6;
    
    布尔类型 a1;
    a1=真;
    a1=假;
    
    printf("%d\n",a1);
    
    return 0;
}