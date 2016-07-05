//
//  06.c
//  day04
//
//  Created by student on 15-9-6.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int power1=600;
    int power2=800;
    if(power1>power2)
    {
        printf("你中弹\n");
        printf("你死亡\n");
    }
    else
    {
        printf("我中弹\n");
        printf("重伤\n");
    }
    
    int salary;
    printf("请告诉我，贵公司最多能给我的工资数：");
    scanf("%d",&salary);
    if(salary<6000)
    {
        printf("我不能接受\n");
    }
    else
    {
        printf("很高兴加盟贵公司\n");
    }
    return 0;
}
