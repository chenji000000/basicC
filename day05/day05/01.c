//
//  01.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x;
    x=3;//变量x可以是左值
    //3=x;//常量3不能是左值
    int y=4;
    //x+y=5;//表达式不能是左值
    //-x=10;
    //x++=123;
    //++x=123;
    
    int z=x+(y=100);
    
    int a,b,c,d;
    a=b=c=d=1;
    printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
    
    a=10;
    b=20;
    printf("%d\n",a=b);
    printf("%d\n",a==b);
    
    
    return 0;
}
