//
//  06.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    for (int i=0;i<10;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for (int i=0;i<10;i+=2)
    {
        printf("%d ",i);
    }
    printf("\n");
    for (int i=1;i<10;i+=2)
    {
        printf("%d ",i);
    }
    printf("\n");
    for (int i=9;i>=0;i--)
    {
        printf("%d ",i);
    }
    printf("\n");
    
    int a=0;
    for (int i=1;i<=100;i++)
    {
        a=a+i;//a+=i;
    }
    printf("%d\n",a);
    
    int begin;
    int end;
    printf("请输入开始的数：");
    scanf("%d",&begin);
    printf("请输入结束的数：");
    scanf("%d",&end);
    
    int sum=0;
    for(int i=begin;i<=end;i++)
    {
        sum+=i;
    }
    printf("sum=%d\n",sum);
    
    
    return 0;
}
