//
//  12.c
//  day08
//
//  Created by student on 15-9-10.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;
    printf("输入一个数字:");
    scanf("%d",&a);
    
    while(a)
    {
        int i;
        bool b[i];
        i=a%10;
        if(b[i]==1)
        {
            printf("重复了\n");
            break;
        }
        b[i]=1;
        a/=10;
    }
    if(a<0)
    {
        printf("没有重复\n");
    }
    return 0;
}
