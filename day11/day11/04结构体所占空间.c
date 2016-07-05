//
//  04结构体所占空间.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

typedef struct//结构体所占的存储空间是按照“字符对齐”方式分配的（1.在结构体中，找到占存储空间最大的基本数据类型成员2.用它的存储空间数作为单位来分配存储空间3.从第二个成员开始，分配空间时，用字节的编号除以该成员所占的存储空间，如果余数为0，则开始分配，否则该字节不用，从下一个字节重新分配）
{
    char ch;
    int i;
}Size1;

typedef struct
{
    int i;
    double d;
}Size2;

typedef struct
{
    int i;
    char ch;
    double d;
}Size3;

typedef struct
{
    int i;
    double d;
    char ch;
}Size4;

typedef struct
{
    char ch;
    short s;
    int i;
}Size5;

int main()
{
    Size1 s1;
    printf("%ld\n",sizeof(s1));
    Size2 s2;
    printf("%ld\n",sizeof(s2));
    Size3 s3;
    printf("%ld\n",sizeof(s3));
    Size4 s4;
    printf("%ld\n",sizeof(s4));
    Size5 s5;
    printf("%ld\n",sizeof(s5));

    return 0;
}
