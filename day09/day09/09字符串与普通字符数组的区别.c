//
//  09.c
//  day09
//
//  Created by student on 15-9-11.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    char str3[5]={'H','e','l','l','o'};
    char str4[]="Hello";//([]自动写占多少储存空间)，当用一个字符数组存储一个字符串时，该字符串在内存中有两份拷贝（栈区和代码区）
    printf("%s\n",str4);
    
    char str2[10]={'a','b','c','\0','d','e','f'};
    printf("%s\n",str2);
    
    char *str5="Hello";//当用字符指针指向一个字符串时，该字符串在内存当中只有一份拷贝（代码区）
    printf("%s\n",str5);
    
    str4[0]='h';
    *str5='h';
    str5="world";//字符数组只能一个一个改，字符指针可以全局改
    return 0;
}
