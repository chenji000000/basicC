//
//  11.c
//  day02
//
//  Created by student on 15-9-1.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    //声明两个变量，用于存储从键盘输入的两个数
    int number1;
    int number2;
    
    //使用scanf输入两个数
    printf("请输入第一个数:");
    scanf("%d",&number1);
    printf("请输入第二个数:");
    scanf("%d",&number2);
    
    int sum=0;
    sum=number1+number2;
    printf("两个数的和是%d\n",sum);
    
    return 0;
}