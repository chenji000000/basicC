//
//  01.c
//  day10
//
//  Created by student on 15-9-14.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20]="Hello";
//    str[0]='H';
//    str[1]='e';
//    str[2]='l';
//    str[3]='l';
//    str[4]='o';
    strcpy(str,"Hello");
//    printf("%s\n",str);
//    
    char str1[5]={};//初始化清0
   //strcpy(str1,"Hello world!");//会导致数组越界
    
    strncpy(str1,"Hello world!",4);//指定个数的strcpy,预防数组越界
//    printf("%s\n",str1);
//    memset(str1,0,5);//赋值清0
//    strncpy(str1,"abcdefgh",4);
//    
//    printf("%ld\n",sizeof(str));
//    printf("%ld\n",strlen(str));//求得是字符串的长度（字符的个数，不包括\0）
//    
//    strcat(str,"aaaaa");//strcat字符串拼接，第一个参数必须是数组,它存在数组越界问题
//    printf("%s\n",str);
//    strncat(str,"bbbbb",2);//指定个数的strcat,通过第三个参数，可以防止数组越界
//    printf("%s\n",str);
//    
    strcpy(str1,"Hell");
    strcpy(str,"HelL");
    printf("%d\n",strcmp(str,str1));
    strcpy(str1,"Hell");
    strcpy(str,"Hell");
    printf("%d\n",strcmp(str,str1));
//
//    printf("请输入一个密码：");
//    scanf("%s",str);
//    if(strcmp(str,"123456")==0)//strcmp对比两个字符串是否相等
//    {
//        printf("密码正确");
//    }
//    //‘\0’的ASC码为0
//    
//    strcpy(str,"Hello");
//    strcpy(str1,"Hell");
//    printf("%d\n",strcmp(str,str1));
//    
//    strcpy(str,"tarena");
// printf("%d",strncmp(str,"tarena_file_path.xml",6));//第三个参数的作用是，仅对比两个字符串的前6个字符
//    
//    //从终端输入一个密码，如果不正确则反复输入，直到正确为止,三次限制
    char a[20];
    int i=0;
    do
    {
        printf("请输入一个密码:");
        scanf("%s",a);
        i++;
        if(i==3)
        {
            break;
        }
        
    }while(strcmp(a,"123456"));
    if(i==3&&strcmp(a,"123456")!=0)
    {
        printf("密码被锁定");
    }
    else
    {
    printf("登陆成功");
    }
    
    return 0;
}
