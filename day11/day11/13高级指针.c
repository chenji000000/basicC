//
//  13高级指针.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    union example{
        struct{
            int x;
            int y;
        }in;
        int a;
        int b;
    }e;
    e.a=1;
    e.b=2;
    e.in.x=e.a*e.b;
    e.in.y=e.a*e.b;
    printf("%d,%d\n",e.in.x,e.in.y);
    return 0;
}