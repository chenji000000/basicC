//
//  08.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i=0;
    for(;i<10;i++)//省略表达式1
    {
        printf("%d ",i);
    }
    printf("\n");
    
   //死循环
//    for(int i=0;;i++)//省略表达式2，for(int i=0;1;i++)
//    {
//        printf("%d ",i);
 //   }
    for(int i=0;i<10;)//省略表达式3，应该把表达式写在循环体中
    {
        printf("%d ",i);
        i++;
    }
    printf("\n");
    
    for(;;)//同时省略三个表达式
    {
        printf("%d ",i);
        i++;
    }
    printf("\n");
    
    
    for(int i=0,j=0,k=0;//表达式1中是一个逗号表达式
        i*j*k-10<30;
        i++,j+=2,k++);
    {
    
        printf("i=%d,j=%d,k=%d\n",i,j,k);
    }

    
    return 0;
}