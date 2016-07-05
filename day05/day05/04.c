//
//  04.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    
    int day;
    printf("请输入一个数(1~7)：");
    scanf("%d",&day);
    
    if (1==day)
    {
        printf("星期一\n");
    }
    else if(2==day)
    {
        printf("星期二\n");
    }
    else if(3==day)
    {
        printf("星期三\n");
    }
    else if(4==day)
    {
        printf("星期四\n");
    }
    else if(5==day)
    {
        printf("星期五\n");
    }
    else if(6==day)
    {
        printf("星期六\n");
    }
    else if(7==day)
    {
        printf("星期日\n");
    }
    else
    {
        printf("输入错误\n");
    }
    
    switch(day)//括号中的表达式的值一定是整数，不能是浮点型数据
    {
        case 1://case后面必须是整型常量，不能是变量或表达式
            printf("星期一\n");
            break;//终止switch的执行
        case 2://case后面的常量不能重复，但没有顺序要求
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
        case 6:
            printf("星期六\n");
            break;
        case 7:
            printf("星期日\n");
            break;
        default://当变量day的值与所有case后面的常量均不相同时，执行default后面的语句，default语句可有可无
            printf("输入错误\n");
            break;
            
            }
    
    
    //从键盘输入一个年份值和月份值，输出该年该月有几天
    
    int year,month,day1=31;
    printf("请输入一个年份值：");
    scanf("%d",&year);
    printf("请输入一个月份值：");
    scanf("%d",&month);
    switch (month)
    {
        case 2:
            day1=28+(year%400==0||(year%4==0&&year%100!=0));
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            day1=30;
            break;
    }
    printf("%d年%d月有%d天\n",year,month,day1);
    
    //输入一个百分制成绩，输出五分制成绩
    
    int score;
    printf("输入一个百分制成绩:");
    scanf("%d",&score);
    
    ;//容错保护，成绩应在0~100之间
    
    switch(score/10)
    {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("E\n");
            break;
            
    }
    return 0;
}
