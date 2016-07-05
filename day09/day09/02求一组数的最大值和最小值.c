//
//  02.c
//  day09
//
//  Created by student on 15-9-11.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void maxAndMin(int a[10],int* max,int* min)
{
    *max=a[0];
    *min=a[0];
    for(int i=1;i<10;i++)
    {
    if(*max<a[i])
    {
        *max=a[i];
    }
    if(*min>a[i])
    {
        *min=a[i];
    }
}
    
}

int main()
{
    srand((unsigned)time(0));
    int a[10];
    for(int i=0;i<10;i++)
    {
        a[i]=rand()%100;
        printf("%d ",a[i]);
    }
    printf("\n");
    
    int maxValue;
    int minValue;
    maxAndMin(a,&maxValue,&minValue);
    printf("max=%d,min=%d\n",maxValue,minValue);
    return 0;
}
