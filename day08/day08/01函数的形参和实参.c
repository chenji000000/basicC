//
//  01.c
//  day08
//
//  Created by student on 15-9-10.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

//求一个整数的平方

int square(int x)//变量x是形参，形参相当于定义了一个变量
{
    return x*x;
}

int plus(int x)//形参是值传递，实参赋值给形参之后，形参在函数体内发生的变化，不会传回给实参，
{
    x++;
    printf("in plus x=%d\n",x);
    return 0;
}

int fa()
{
    printf("in fa\n");
    return 0;
}

int fb(void)
{
    printf("in fb\n");
    return 0;
}

int add(int x,int y)
{
    return x+y;
}

int main()
{
    int result=square(10);//10是实参，相当于给形参赋值
    printf("%d\n",result);
    
    int n=12;
    result=square(n);
    
    int x=100;
    plus(x);
    printf("in main x=%d\n",x);
    
    fa();
    fa(1,2,3,4,5);//无形参时，调用函数如果有实参，实参将被忽略
    
    //fb(1,2,3);//当形参指定为void后，不能有实参
    fb();
    
    //result=add(10,20,30);//有形参时，实参的个数多于形参的个数，会报错
    add(10,20);
    
    add(3.14,2.68);//以形参类型为准，进行转换
    
    return 0;
}