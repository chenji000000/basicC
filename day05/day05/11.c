//
//  11.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x=0;
    do
    {
        printf("%d ",x);
        x++;
    }while(x<10);
    printf("\n");
    
    
    double money=0;
    printf("请输入您要取的钱数：");
    do
    {
        scanf("%lf",&money);
        if(money<=0)
        {
            printf("输入有误\n");
        }
    }while(money<=0);
    
    
    int function;
    do
    {
        printf("1.打开文件\n");
        printf("2.保存文件\n");
        printf("3.退出\n");
        printf("请选择：");
        scanf("%d",&function);
    }while(function!=3);

    
    return 0;
}
