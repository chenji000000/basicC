//
//  03.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <string.h>
//有程序员创建的一种新的数据类型
typedef struct //把不同类型的数据放在一起，可读性增加，便于理解
{
    int i;
    char ch;
    double d;
}Example;

typedef struct
{
    char name[20];
    int ID;
    char address[100];
}Student;

int main()
{
    Example s;//用程序员自己创建的数据类型定义一个变量s;
    s.i=10;//对于结构体类型变量，只能一个成员一个成员的使用，不能同时使用所有成员
    s.ch='a';
    s.d=3.14;
    printf("%d,%c,%lf\n",s.i,s.ch,s.d);
    
    Student stu;
    strcpy(stu.name,"zhangsan");
    stu.ID=1000;
  strcpy(stu.address,"jiangsu nanjing");
    
    printf("%s,%d,%s\n",stu.name,stu.ID,stu.address);
    
    return 0;
}
