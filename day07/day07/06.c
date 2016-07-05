//
//  06.c
//  day07
//
//  Created by student on 15-9-9.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
        printf("%d ",a[i][j]);
    }
        printf("\n");
    }
    
    int c[3][3]={{1},{2},{3}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    int b[3][3]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    int d[][3]={{1,2,3},{4,5,6},{7,8,9},{3}};
    
    int e[3][3]={1,2,3,4,5,6,7,8,9};
    
    return 0;
}
