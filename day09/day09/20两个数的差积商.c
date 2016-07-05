//
//  20两个数的差积商.c
//  day09
//
//  Created by student on 15-9-13.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int subValue(int a,int b)
{
    return a-b;
}

int mulValue(int a,int b)
{
    return a*b;
}

int divValue(int a,int b)
{
    return a/b;
}


int main()
{
    int x;
    int y;
    
    printf("请输入两个整数：");
    scanf("%d%d",&x,&y);
    
    int sub;
    sub=subValue(x,y);
    printf("两个数的差是：%d\n",sub);
    
    int mul;
    mul=mulValue(x,y);
    printf("两个数的积是：%d\n",mul);
    
    int div;
    div=divValue(x,y);
    printf("两个数的商是：%d\n",div);
    
    return 0;
}
