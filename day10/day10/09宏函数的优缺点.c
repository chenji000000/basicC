//
//  09宏函数的优缺点.c
//  day10
//
//  Created by student on 15-9-14.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

#define SQUARE(x) ((x)*(x))
#define SUM(x,y) ((x)+(y))
#define SWAP(T,x,y) {T t=(x);(x)=(y);(y)=t;}
#define MAX(x,y) ((x)>(y)?(x):(y))

int main()
{
    //宏函数中的参数一定要用括号括起来，以防止替换后的优先级问题
    printf("%d\n",SQUARE(5));
    printf("%d\n",SQUARE(3+2));
    
    //宏函数的整个表达式也需要用括号括起来，同样是为了防止优先级问题
    printf("%d\n",SUM(10,20)*5);
    
    //宏函数中有多条语句时，应写成复合语句，以防止变量的重复定义问题
    int x=10;
    int y=20;
    SWAP(int,x,y);
    x=100;
    y=200;
    SWAP(int,x,y);
    
    //在调用宏函数时，不要使用++/--运算符
    x=3;
    y=4;
    int result=MAX(x,y);
    printf("x=%d,y=%d,result=%d\n",x,y,result);
    result=MAX(x++,y++);
    printf("x=%d,y=%d,result=%d\n",x,y,result);
    return 0;
}