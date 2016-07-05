//
//  16约瑟夫问题.c
//  day09
//
//  Created by student on 15-9-12.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[41],del=0;
    for(int i=0;i<41;i++)
    {
        a[i]=i+1;
    }
    
    printf("Pass:");
    for(int sum=41;sum!=1;sum--)
    {
        del=(del+2)%sum;
        printf(" %d",a[del]);
    
    for(int i=del;i<=sum-2;i++)
        a[i]=a[i+1];
    }
    printf("\nThe winner is:%d\n\n",a[0]);
    
    return 0;
}
