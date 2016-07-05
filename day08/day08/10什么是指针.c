//
//  10.c
//  day08
//
//  Created by student on 15-9-10.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x;
    //scanf("%d",&x);
    int a[10];
    printf("%p\n",a);
    printf("%p\n",&a[0]);
    
    int a1=10;
    double d1=3.14;
    char c1='a';
    int* p=&x;
    
    printf("%ld\n",sizeof(p));
    
    x=10;
    *p=100;
    printf("x=%d\n",x);
    
    x=200;
    printf("x=%d\n",*p);
    
    
    char ch='A';
    char* pch=&ch;
    double d2=2.68;
    double* pd=&d2;
    float f=3.14;
    float* pf=&f;//不同类型的变量由不同类型的指针保存其地址
    unsigned u=100;
    unsigned* pu=&u;
    
    
    int *p1=&x;
    int* p2=&x;
    
    int *p3,p4;
    printf("%ld,%ld\n",sizeof(p3),sizeof(p4));
    //int* p3,p4;
    
    
    int b,c;
    int* p5;
    p5=&b;//指针p5指向变量b.
    p5=&c;//指针指向的改变,改变为指向变量c
    
    return 0;
}
