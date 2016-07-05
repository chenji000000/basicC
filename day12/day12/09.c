//
//  09.c
//  day12
//
//  Created by student on 15-9-16.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

void fa(const int x)//const同样会使形参只读的
{
    //x++;
}

int main()
{
    const int x=10;//在变量定义前加const关键字会使该变量变成只读的变量
    //x=20;//x不能作为左值使用
    
    const double d=3.14;
    //d=2.68;
    
    const int a[10]={1,2,3,4,5,6,7,8,9,0};//const会使数组中的所有元素变成只读的
    //a[0]=10;
    
    int b=10;
    const int* p=&b;
    //*p=20;//当const位于*的左边时，将指针指向的空间变成只读的
    b=40;
    int c=30;
    p=&c;
    
    int* const p1=&b;
    *p1=50;
    //p1=&c;//当const在*的右边时，将指针本身变成只读的
    
    const int* const p2=&b;//在*左右均有const时，指针指向的空间和指针本身均为只读的
    //*p2=60;
    //p2=&c;
    
    return 0;
}
