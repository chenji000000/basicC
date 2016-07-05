//
//  05.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[20];
    bool gender;
    int age;
}Person;

//结构体类型作为函数的形参的类型（值传递）
void print(Person x)
{
    printf("%s,%s,%d\n",x.name,x.gender?"男":"女",x.age);
}

void print1(Person* x)
{
printf("%s,%s,%d\n",x->name,x->gender?"男":"女",x->age);
}
//地址传递
void grewup(Person* x)
{
    x->age++;
}

int main()
{//结构体变量
    Person p;
    strcpy(p.name,"张三");
    p.gender=true;
    p.age=30;
    //print(p);//变量是.
    print1(&p);
   //结构体变量的初始化
    int a=10;
    Person p1={"李四",true,28};
    //print(p1);
    print1(&p);
  //结构体指针
    int* pa=&a;
    Person p2;
    Person* pp=&p2;
    strcpy(pp->name,"王五");//指针用->,成员运算符
    pp->gender=true;
    pp->age=29;
    //print(*pp);
    print1(pp);
    grewup(pp);
    print1(pp);
    
    
    
    return 0;
}
