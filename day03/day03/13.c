//
//  13.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{

   // char c='中';//字符变量中不能存储汉字
    char c;
    c='A';
    printf("%c\n",c);//%c对应字符本身
    printf("%d\n",c);//%d对应的是字符的ASCII码
    
    c='abc';
    printf("%c\n",c);//一串字符输出最后一个字符
    return 0;
    
}
