//
//  12.c
//  day10
//
//  Created by student on 15-9-14.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int year;
    int month;
    int day=31;
    
    printf("请输入年:");
    scanf("%d",&year);
    printf("请输入月:");
    scanf("%d",&month);
    
    switch(month)
    {
    case 2:
    if((year%4==0&&year%100!=0)||year%400==0)
        day=29;
    else
        day=28;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        day=30;
        break;
    }
    printf("%d年%d月有%d天\n",year,month,day);
    return 0;
}