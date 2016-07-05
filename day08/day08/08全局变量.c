//
//  08.c
//  day08
//
//  Created by student on 15-9-10.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int g1;//全局变量,如果不赋初值，系统将其清0
void fb()
{
    g1++;
    //g2++;全局变量的作用域是从定义所在行开始的到文件结束
}

int g2=100;

int abc=100;
void fc()//全局变量与局部变量的关系
{
//    auto a=10;
//    auto b=3.14;
  
    printf("abc=%d\n",abc);
   /*auto*/ int abc=200;
    printf("abc=%d\n",abc);//局部变量与全局变量同名时，局部变量优先被使用
 
    {
        int abc=300;
        printf("abc=%d\n",abc);
    }
    printf("abc=%d\n",abc);
}

int main()
{
    printf("第一次g1=%d\n",g1);
    g1++;
    printf("第二次g1=%d\n",g1);
    fb();
    printf("第三次g1=%d\n",g1);
    
    fc();
    return 0;
}
