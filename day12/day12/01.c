//
//  01.c
//  day12
//
//  Created by student on 15-9-16.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i=10;
    int* pi=&i;
    float f=3.14;
    //pi=&f;//整型指针只能指向整形变量，不能指向float型变量，
    
    *pi=20;
    *pi=2.68;
    
    void* p=NULL;//定义了一个万能指针
    int x=30;
    p=&x;
    
    double y=3.14;
    p=&y;
    
    char* str="abcdefg";
    p=str;
    
    char str1[]="Hello world!";
    p=str1;
    
    return 0;
}
