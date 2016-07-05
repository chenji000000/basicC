//
//  14.c
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
    
    
    int n;
    printf("输入学生数:");
    scanf("%d",&n);
    int a[n][6];
    
    int total[5]={};
    for(int i=0;i<n;i++)
    {
        a[i][0]=i;
        int sum=0;
        for(int j=1;j<5;j++)
        {
            a[i][j]=rand()%101;
            sum+=a[i][j];
        total[j]+=a[i][j];
        }
        
        a[i][5]=sum;
        printf("\n");
        
    }
    
    printf("No\tC\tOC\tFoundation\tUIKit\ttotal\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    printf("总计\t");
    for(int i=1;i<5;i++)
    {
        printf("%d\t",total[i]);
    }
    return 0;
    
}
