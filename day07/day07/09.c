//
//  09.c
//  day07
//
//  Created by student on 15-9-9.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

double fa(int x)
{
    return 3.14*x*x;
}


double fb()
{
    int r;
    printf("请输入一个半径:");
    scanf("%d",&r);
    double area=3.14*r*r;
    return area;
}

int fc()
{
    printf("本函数没有计算数值\n");
    return 0;
}

int main()
{
    double area=fb();
    ;//有关area的其他处理语句
    area=fb();
    
    area=fa(10);
    area=fa(20);
    
    fc();
    
    return 0;
}
