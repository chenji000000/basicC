//
//  05.c
//  day04
//
//  Created by student on 15-9-6.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int year;
    printf("输入一个年龄：");
    scanf("%d",&year);
    if(year>=18)
    {//空语句
        ;//输出“成年人”
    }
    if(year<18)
    {
        printf("未成年\n");
    }
    return 0;
}
