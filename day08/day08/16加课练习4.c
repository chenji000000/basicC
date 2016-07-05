//
//  16加课练习4.c
//  day08
//
//  Created by student on 15-9-12.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getMemory(char **str)
{

    *str=(char*)malloc(100);//在堆上申请100个字节的空间
}

int main()
{
    int *str=NULL;
    getMemory(&str);
    printf("%p",str);
    strcpy(str,"hello world");
    printf("%s\n",str);
    return 0;
}

