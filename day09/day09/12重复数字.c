//
//  12.c
//  day09
//
//  Created by student on 15-9-11.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    long num;
    printf("请输入一个整数：");
    scanf("%ld",&num);
    int count=0;
    long a=num;
    while(a)
    {
        count++;
        a/=10;
    }
    int array[count];
    for(int i=0;num;i++)
    {
        array[i]=num%10;
        num/=10;
        for(int j=0;j<i;j++)
        {
        if(array[j]==array[i])
        {
            printf("重复了\n");
            return 0;
        }
        }
        
    }
    printf("没有重复数字\n");
    
    return 0;
}
