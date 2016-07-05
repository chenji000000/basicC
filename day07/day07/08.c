//
//  08.c
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
    int n=10;
    ;//输入学生数
    int a[n][6];
    
    for (int i=0;i<n;i++)
    {
        a[i][0]=i;
        int sum=0;
        for(int j=1;j<5;j++)
        {
            a[i][j]=rand()%101;
            sum+=a[i][j];
        }
        a[i][5]=sum;
        printf("\n");
    }
    int total[6]={};
    printf("NO.\t\tC\t\tOC\t\tFoundation\t\tUIKit\t\tTotal\n");
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf("%d\t\t",a[i][j]);
            total[j]+=a[i][j];
        }
        printf("\n");
    }
    printf("总分\t\t");
    for(int i=1;i<5;i++)
    {
        printf("%d\t\t",total[i]);
    }
    return 0;
}
