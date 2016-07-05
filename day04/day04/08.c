//
//  08.c
//  day04
//
//  Created by student on 15-9-6.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x;
    printf("请输入一个整数:");
    scanf("%d",&x);
    if(x>=3)
    {
        printf("x>=3\n");
    }
    else if(x>=2)
    {
        printf("x>=2\n");
    }
    else if(x>=1)
    {
        printf("x>=1\n");
    }
    else
    {
        printf("other\n");
    }
    
    printf("请输入今天的天气(0:晴，1：阴，2：多云，3：下雨):");
    scanf("%d",&x);
    if(0==x)
    {
        printf("打太极\n");
    }
    else if(1==x)
    {
        printf("爬香山\n");
    }
    else if(2==x)
    {
        printf("约会\n");
    }
    else if(3==x)
    {
        printf("睡觉\n");
    }
    else
    {
        printf("上班\n");
    }
    return 0;
}
