//
//  11.c
//  day09
//
//  Created by student on 15-9-11.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    char name[20];
    int age;
    char school[100];
    //输入信息
    printf("请输入学生的姓名：");
    scanf("%s",name);
    printf("请输入学生的年龄：");
    scanf("%d",&age);
    printf("请输入学生的毕业院校：");
    scanf("%s",school);
    //输出信息
    printf("学生的个人信息如下：\n");
    printf("姓名：%s\n",name);
    printf("年龄：%d\n",age);
    printf("毕业院校：%s\n",school);
    return 0;
}
