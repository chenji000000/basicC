//
//  13.c
//  day04
//
//  Created by student on 15-9-6.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int year;
    int month;
    printf("请输入年份:");
    scanf("%d",&year);
    printf("请输入月份:");
    scanf("%d",&month);
    if(year%400==0||(year%4==0&&year%100!=0))
       {
       if(month==2)
       {
           printf("该月有29天");
       }
           else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
           {
               printf("该月有31天");
           }
           else
           {
               printf("该月有30天");
           }
       }
       else
       {if(month==2)
       {
           printf("该月有28天");
       }
       else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
       {
           printf("该月有31天");
       }
       else
       {
           printf("该月有30天");
       }
       }
    return 0;
}
