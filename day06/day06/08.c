//
//  08.c
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
    for(int i=0;i<10;i++)
    {
    a[i]=rand()%100;
    printf("%d ",a[i]);
        }
    printf("\n");
    
    int max=a[0];
    
    for(int i=1;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max=%d\n",max);
    
    return 0;
}
