//
//  03.c
//  day08
//
//  Created by student on 15-9-10.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumValue(int data[10])
{
    int sum=data[0];
    for(int i=1;i<10;i++)
    {
        sum+=data[i];
    }
    return sum;
}

int maxValue(int data[10])
{
    int max=data[0];
    for(int i=1;i<10;i++)
    {
    if(data[i]>max)
    {
        max=data[i];
    }
    }
    return max;
}

int minValue(int data[10])
{
    int min=data[0];
    for(int i=1;i<10;i++)
    {
        if(data[i]<min)
        {
            min=data[i];
        }
    }
    return min;
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
    
    int b=sumValue(a);
    int c=maxValue(a);
    int d=minValue(a);
    printf("sum=%d\n",b);
    printf("max=%d\n",c);
    printf("min=%d\n",d);
    return 0;
}



