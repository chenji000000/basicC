//
//  11.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    char c1;
    printf("%ld\n",sizeof(c1));
    c1=127;//2^7-1
    c1=-128;//-2^7
    printf("%d\n",c1);
    
    unsigned char c2;
    printf("%ld\n",sizeof(c2));
    c2=255;//0~2^8-1
    printf("%u\n",c2);
    
    c2=48;
    c2=65;
    c2=97;
    
    c2='0';
    printf("%d\n",c2);
    c2='A';
    printf("%d\n",c2);
    printf("%c\n",c2);
    
    c2='ABC';
    printf("%c\n",c2);
    
    //c2='';//单引号中必须有一个字符
    c2=' ';
    
    
    char ch='A';
    ch=ch+1;
    printf("%c\n",ch);
    ch='A'+10;
    printf("%c\n",ch);
    
    //实现大小写字母之间转换
    ch='A';
    ch=ch-'A'+'a';//大写字母转小写字母
    printf("%c\n",ch);
    ch='C';
    ch=ch-'A'+'a';
    printf("%c\n",ch);
    ch='d';
    ch=ch-'a'+'A';//小写字母转大写字母
    printf("%c\n",ch);
    
    ch='中';//不能将汉字赋值给字符变量
    
    return 0;
}
