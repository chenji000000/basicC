//
//  06.c
//  day10
//
//  Created by student on 15-9-14.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10


int main()
{
    srand((unsigned)time(0));
    int a[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        a[i]=rand()%101-50;
    }
    int min=a[0];
    for(int i=1;i<SIZE;i++)
    {
    if(min>a[i])
    {
        min=a[i];
    }
    }
    printf("最小值为：%d\n",min);
    for(int i=0;i<SIZE;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
