//
//  07枚举.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

enum Week
{
MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY,
};

enum Season
{
SPRING=100,SUMMER=200,AUTUMN,WINTER,
};

enum
{
    kEmpty,//棋盘上没有棋子
    kWhite,//有一个白字
    kBlack,//有一个黑子
};

enum Months
{
JANUARY=1,FEBRUARY,MARTH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER,
};

void show(enum Week week)
{
switch(week)
    {
        case MONDAY:
            printf("今天是星期一\n");
            break;
        case TUESDAY:
            printf("今天是星期二\n");
            break;
        case WEDNESDAY:
            printf("今天是星期三\n");
            break;
        case THURSDAY:
            printf("今天是星期四\n");
            break;
        case FRIDAY:
            printf("今天是星期五\n");
            break;
        case SATURDAY:
            printf("今天是星期六\n");
            break;
        case SUNDAY:
            printf("今天是星期日\n");
            break;
    }
}

int main()
{
    show(MONDAY);
    printf("%d,%d,%d,%d\n",SPRING,SUMMER,AUTUMN,WINTER);
    
    enum Months m;
    m=JANUARY;
    m=1;
    
    return 0;
}
