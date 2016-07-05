//
//  11.c
//  day06
//
//  Created by student on 15-9-8.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(0));
    int a[10];
    for (int i=0;i<10;i++)
    {
        a[i]=rand()%100;
        
    }
    int min=a[0];
    int sum=0;
    double average;
    for (int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
        sum+=a[i];
           }
    average=sum*1.0/10;
   
    for(int i=1;i<10;i++)
    {
    if(a[i]<min)
    {
        min=a[i];
          }
        
    }
    printf("min=%d ",min);
    printf("sum=%d",sum);
    printf("average=%lf",average);

    printf("\n");
    

}
