//
//  10.c
//  day09
//
//  Created by student on 15-9-11.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    printf("请输入一个密码：");
    //错误方式，
//    char* password;//有可能崩溃（可能在栈区，代码区，全局区）
//    scanf("%s",password);
//    char* password1=NULL;//肯定崩溃（常量：代码区）
//    scanf("%s",password1);
//    char* password2="abc123";//肯定崩溃（代码区）
//    scanf("%s",password2);
    
    //唯一的正确方式
    char password3[100];
    scanf("%s",password3);
    printf("%s\n",password3);
    return 0;
}
