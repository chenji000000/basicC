//
//  08.c
//  day12
//
//  Created by student on 15-9-16.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x;
    printf("请输入一个整数：");
    scanf("%d",&x);
    
    char ch;
    printf("请输入一个字符：");
    scanf("%*c");//（读入一个字符，把这个丢弃掉）清除键盘缓冲期中的一个字符
    scanf("%c",&ch);
    
    printf("x=%d,ch=%c\n",x,ch);
    
    char str[5];
    printf("请输入一个字符串：");
    scanf("%s",str);//很容易造成数组越界
    printf("%s\n",str);
    printf("请输入一个字符串：");
    scanf("%4s",str);//%4s确保str中只被输入4个字符
    printf("%s\n",str);
    
    
    
    return 0;
}
