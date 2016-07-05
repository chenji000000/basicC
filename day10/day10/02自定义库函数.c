//
//  02自定义库函数.c
//  day10
//
//  Created by student on 15-9-14.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

//void Strcpy(char* s1,char* s2)
//{
//    while (*s1++=*s2++);
//}
//
//选做，完成以下自定义字符串库函数
//void StrCmp(char* s1,char* s2)
//{
//    while(*s1&&*s2&&(*s1++==*s2++));
//    
//    printf("%d\n",s1-s2);
//}
int Strlen(char *s)
{
    int i=0;
    while(*s!='\0')
    {
        i++;
    }
    return i-1;
}

void Strcat(char* s1,char* s2)
{
    char s[20];
    for()

}

int main()
{
    char str[20]="Hello";
//    Strcpy(str,"Hello");
//    printf("%s\n",str);
    
//    StrCmp("Hello","hello");
    
    Strlen(str);
//    strcat(str,"aaa");
//    printf("%s\n",str);
    return 0;
}
