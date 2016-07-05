//
//  13.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    
    for(int i=0;i<10;i++)
    {
        printf("%d ",i);
        if(i==5)
        {
            break;//终止循环
        }
        
    }
    
    double money=0;
    printf("请输入您要取的钱数：");
    while(1)
    {
        scanf("%lf",&money);
        if(money>0)
        {
            break;
        }
        printf("输入有误，重新输入\n");
        
    }
    printf("您已经获得%.2lf\n",money);
    
    
    return 0;
}

