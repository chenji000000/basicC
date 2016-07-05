//
//  14循环3.c
//  day10
//
//  Created by student on 15-9-14.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int num;
    int sum=0;
    
    for(int i=0;i<10;i++)
    {
        printf("请输入数字：");
    scanf("%d",&num);
    sum+=num;
    }
    
    printf("sum=%d\n",sum);
    return 0;
}
