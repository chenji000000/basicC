//
//  15.c
//  day07
//
//  Created by student on 15-9-9.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

void fun(int a,int b,int c)
{
    a=456;
    b=567;
    c=678;
}
int main()
{
    int x=10,y=20,z=30;
    fun (x,y,z);
    printf("x=%d,y=%d,z=%d\n",x,y,z);
    return 0;
}
