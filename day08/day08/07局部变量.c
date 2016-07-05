//
//  07.c
//  day08
//
//  Created by student on 15-9-10.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

void fa(int x)//形参x是局部变量
{
    x++;
    printf("%d\n",x);
    
    int y=20;//定义在函数体内的变量是局部变量
    y++;
    
    if(y>0)
    {
        y++;
        int a=10;//在大括号内定义的变量也是局部变量
        a+=y;
        printf("%d\n",a);
    }
   // a++;//变量a是上面大括号内的局部变量，在大括号外不能使用
    
    for(int i=0;i<10;i++)//定义在表达式1中的变量也是局部变量，只能在循环体中起作用
    {
        printf("%d ",i);
    }
    //i++;//在循环体外,i不起作用
    
    {
        int b=20;
        b++;
        int a[100]={};//局部数组
        a[0]=12345;
    }
   //b++;
    //a[0]=10;
    
}


int main()
{
    //x++;//函数fa的形参只能在函数fa中起作用，不能在主函数中使用
    
    //y++;//y是函数fa中的局部变量，不能在主函数中使用
    
    int x;
    
    return 0;
}
