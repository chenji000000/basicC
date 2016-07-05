//
//  01.c
//  day09
//
//  Created by student on 15-9-11.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

void inc(int x)//值传递
{
    x++;
    printf("in inc x=%d\n",x);
    
}

void inc1(int* a)//地址传递
{
    (*a)++;
    printf("in inc1 *a=%d\n",*a);
}

//写一个无返回值的函数，求一个整数的平方

void inc2(int* b)
{
    (*b)*=(*b);
    printf("in inc1 *b=%d\n",*b);

}

//写一个函数，将主函数中的变量x和y的值进行交换

void inc3(int* c,int* d)
{
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;
    
}

int main()
{
    int y=10;
    inc(y);
    printf("in main y=%d\n",y);
    
    inc1(&y);
    printf("in main y=%d\n",y);
    
    inc2(&y);
    printf("in main y=%d\n",y);
    
    int a=10;
    int b=20;
    
    inc3(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    
    return 0;
}
