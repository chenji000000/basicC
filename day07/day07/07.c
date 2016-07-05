//
//  07.c
//  day07
//
//  Created by student on 15-9-9.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    /*-------------------
     0      0      0
     1      1      1
     2^2    2^3    sqrt(2)
     3^2    3^3    sqrt(3)
     ...
     ------------------*/
    
    int n=10;
    ;//输入n
    double table[n][3];
    for(int i=0;i<n;i++)
    {
        table [i][0]=i*i;
        table [i][1]=i*i*i;
        table [i][2]=sqrt(i);
    }
    
    printf("请输入查询的数字：");
    scanf("%d",&n);
    printf("%d的平方：%lf,%d的立方：%lf,%d的平方根：%lf\n",table[n][0],table[n][1],table[n][2]);
    
     return 0;
}
