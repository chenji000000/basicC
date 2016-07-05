//
//  04.c
//  day04
//
//  Created by student on 15-9-6.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int y=4;
    if(y==3)
    {
        printf("y=%d\n",y);
    }
    
    double x=0;
    if(x+5)
    {
        printf("OK\n");
    }
    if(x>5)
    {
        printf("x>5\n");
    }
    if(x)
    {
        printf("%lf\n",x);
    }
    if("Hello world!\n")//字符串为真
    {
        printf("Hello world!\n");
    }
    
    int power1=1000;
    int power2=800;
    if(power1>power2)
    {//复合语句
        printf("开火\n");
        printf("差点阵亡\n");
    }
    
    int x1;
    printf("请输入一个整数：");
    scanf("%d",&x1);
    if(x1)//等效于x1!=0
    {
        printf("x1=%d\n",x1);
    
    }
    
    return 0;
}
