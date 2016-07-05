//
//  01.c
//  day06
//
//  Created by student on 15-9-8.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    for (int i=0;i<10;i++)
    {
    if (i%2==0)
    {
        continue;
    }
        printf("%d ",i);
    }
    
    for (int i=1;i<=5;i++)
    {
        if(i%2)
        {
        printf("*");
        }
        else
        {
            continue;
        }
        printf("#");
    }
    printf("$\n");
    
    //打印0~9之间的所有数，但不包括5
    
    for(int i=0;i<10;i++)
    {
    if(i==5)
    {
        continue;//结束本次循环
    }
        printf("%d ",i);
    }
    printf("\n");
    
    return 0;
}
