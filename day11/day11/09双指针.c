//
//  09双指针.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x=10;
    int* px=&x;
    int** ppx=&px;
    int*** pppx=&ppx;
    
    *px=20;
    *(*ppx)=30;
    ***pppx=40;
    
    printf("x=%d\n",x);
    return 0;
}
