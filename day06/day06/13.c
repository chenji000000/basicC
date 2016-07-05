//
//  13.c
//  day06
//
//  Created by student on 15-9-8.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>


int main()
{
    int num,b[10]={0};
    printf("请输入一个数：");
    scanf("%d",&num);
    
    
   while(num)
    {
        int a=num%10;
    for (int k=0;k<10;k++)
    {
        if(a==k)
        {
            b[a]++;
           
        }
    }
        num/=10;
    
    }
    for (int i=0;i<10;i++)
    {
        printf("%d重复了%d次\n",i,b[i]);
    }
    return 0;
}