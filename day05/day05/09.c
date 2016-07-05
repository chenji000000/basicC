//
//  09.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x=0;
    while(x<10)
    {
        printf("%d ",x);
        x++;
    }
    printf("\n");
    
    
    
    
    /*--------打印下表-------
     1         2
     2         4
     3         9
     4         16
     n         n^2
     ---------------------*/
    int n=10;
    ;//从控制台要求用户输入
    x=1;
    while(x<=n)
    {
        printf("%d\t\t\t%d\n",x,x*x);
        x++;
    }
    
    double money=0;
    printf("请输入你要取的钱数：");
   
    while(money<=0)
    {
     scanf("%lf",&money);
    if(money<=0)
    {
        printf("输入有误\n");
    }
    }
    printf("您已经获得%.2lf\n",money);
    
    //从终端输入任意个数，统计输入的数有多少正数，有多少负数。
  
    int num1=0;
    int num2=0;
    int num=1;
    while(num!=0)
    {
        printf("请输入一个数：");
        scanf("%d",&num);
        if(num>0)
        {
            num1++;
        }
        if(num<0)
        {
            num2++;
        }
    }
    printf("输入%d个正数，%d个负数\n",num1,num2);
    
    return 0;
}

