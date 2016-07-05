//
//  05.c
//  day02
//
//  Created by student on 15-9-1.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int number1,number2;//同时声明了两个整型变量
    number1=10;
    number2=number1;
    printf("number1=%d,number2=%d\n",number1,number2);//%d被称为格式控制符
    
    float f1,f2;//同时声明了两个浮点型（小数）变量
    f1=10.6;
    f2=12.34;
    printf("f1=%f,f2=%f\n",f1,f2);
    return 0;
}
