//
//  10.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

void get(char* str)
{
    str="This is a string.";
}

void getString(char** str)
{
    *str="This is a string.";
}

int main()
{
    char* s=NULL;
    get(s);
    printf("%s\n",s);
    
    getString(&s);
    printf("%s\n",s);
    return 0;
}
