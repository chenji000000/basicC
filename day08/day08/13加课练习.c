//
//  13加课练习.c
//  day08
//
//  Created by student on 15-9-12.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

//1~100
//不能使用 for while do...while if
//switch goto break continue ?:

int printf_all(int k)
{

    printf("%d ",k);
    return k>1&&printf_all(k-1);
}
//A&&B A为假 B就不会被执行
//A||B A为真 B就不会被执行
int main()
{
    printf_all(100);
}
