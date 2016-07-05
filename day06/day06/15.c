//
//  15.c
//  day06
//
//  Created by student on 15-9-8.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>


int main()
{
    printf("100以内的素数有：");
    for (int i = 2; i <100; i++)
    {
        int j;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
       if(j>i/2)
       {
            printf("%d ", i);
       }
            
    }
    printf("\n");
    return 0;
}