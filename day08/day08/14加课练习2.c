//
//  14加课练习2.c
//  day08
//
//  Created by student on 15-9-12.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50]="hello";
    char str2[50]="world";
    //str1的长度和在内存中占得大小
    printf("strlen(str1)=%d",strlen(str1));//5
    printf("sizeof(str1)=%d",sizeof(str1));//50
    
    //字符串的拼接
    strcat(str1,str2);
    printf("str1=%s",str1);
    
    //字符串的拷贝
    strcpy(str1,str2);
    printf("str1=%s",str1);
    
    //字符串的比较
 //   if(str1==str2)//比较的是两个字符串的地址，而不是内容
    if(strcmp(str1,str2)==0)
    {
        printf("两个字符串相等");
    }
    else
    {
        printf("两个字符串不相等");
    }
    
    char* name="zhangsan";
    int age=22;
    char sex='M';
    double salary=4000.0;
    
    char student[200]={0};
    sprintf(student,"我叫%s,今年%d,性别：%c,工资：%lf",name,age,sex,salary);
    printf("%s",student);
    
    return 0;
}

