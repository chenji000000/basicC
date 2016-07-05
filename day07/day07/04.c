//
//  04.c
//  day07
//
//  Created by student on 15-9-9.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(0));
    
    int b;
    b=rand()%16+1;
    printf("蓝球：%d\n",b);
   int a[6];
    printf("红球：");
    
    for(int i=0;i<6;i++)
    {
        a[i]=rand()%33+1;
        for(int j=0;j<i;j++)
        {
            if(a[j]==a[i])
            {
                i--;
                break;
            }
        
        }
    
    }
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
