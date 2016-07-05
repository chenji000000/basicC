//
//  11.c
//  day04
//
//  Created by student on 15-9-6.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int year;
    printf("输入一个年份：");
    scanf("%d",&year);
    if(year%400==0)//能被400整除
    {
        printf("闰年\n");
    }
    else if(year%4==0&&year%100!=0)//能被4整除，同时不能被100整除
    {
        printf("闰年\n");
    }
    else
    {
        printf("平年\n");
    }
    return 0;
    
}
