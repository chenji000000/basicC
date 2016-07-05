//
//  08.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

enum Season
{
SPRING,SUMMER,AUTUMN,WINTER,
};


int main()
{
    int season;
    printf("请输入一个整数：");
    scanf("%d",&season);
   
    switch(season)
    {
        case SPRING:
            printf("现在是春天\n");
            break;
        case SUMMER:
            printf("现在是夏天\n");
            break;
        case AUTUMN:
            printf("现在是秋天\n");
            break;
        case WINTER:
            printf("现在是冬天\n");
            break;
        default:
            printf("输入错误\n");
    }
    
    
    return 0;
}
