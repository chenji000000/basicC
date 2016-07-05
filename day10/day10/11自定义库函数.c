//
//  11自定义库函数.c
//  day10
//
//  Created by student on 15-9-14.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

char* self_strcpy(char* str1,char* str2)
{
if((NULL==str1)||(NULL==str2))
{
    printf("invalid arguments");
    return 0;
}
    char* strcopy=str1;
    while('\0'!=(*str1++=*str2++))
        ;
    '\0'==*str1;
    return strcopy;
}

int main()
{
    self_strcpy("Hello","world");
}

