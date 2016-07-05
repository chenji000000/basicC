//
//  15加课练习3.c
//  day08
//
//  Created by student on 15-9-12.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//strlen
//char* str="hello"==>5
//char* str1="welcome to tarena!"==>?

int Mystrlen(const char* str)
{
    //0.判断str是否为NULL
    if(str==NULL)
        return 0;
    int num=0;
//1.声明一个指针指向字符串的开始位置
    char* p=str;
//2.循环遍历这个字符串计算长度
    while(*p!='\0')
    {
        num++;
        p++;
    }
//3. 返回长度
    return num;
}
int main()
{
    char* str="welcome to tarena!";
    
    int res=Mystrlen(str);
    printf("res=%d\n",res);

    return 0;
}

