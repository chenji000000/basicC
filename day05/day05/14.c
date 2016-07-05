//
//  14.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int sum=0;
    int i;
    do
    {
        printf("输入一个数：");
        scanf("%d",&i);
        sum+=i;
        if(i==0)
        {
            break;
        }
        
    }while(i!=0);
    printf("%d",sum);
    
    return 0;
    
}
