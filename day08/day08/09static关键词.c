//
//  09.c
//  day08
//
//  Created by student on 15-9-10.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

void fa()
{
    int n=0;
    printf("n=%d\n",n);
    n++;
    }

void fd()
{
    static int n=0;//static的作用是延长局部变量的生存期，但不会改变其作用域
    printf("n=%d\n",n);
    n++;
}

int main()
{
    //n=0;
    for(int i=0;i<5;i++)
    {
        fa();
    }
    for(int i=0;i<5;i++)
    {
        fd();
    }
    return 0;
}
