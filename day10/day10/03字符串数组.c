//
//  03字符串数组.c
//  day10
//
//  Created by student on 15-9-14.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
//    char* str0="aaa";
//    char* str1="bbb";
//    char* str2="ccc";
//    char* str3="ddd";
//    char* str4="eee";
//    
//    char* str[5]={"aaa","bbb","ccc","ddd","eee"};
//    for(int i=0;i<5;i++)
//    {
//        printf("%s\n",str[i]);
//    }
//    
//    str[0]="AAA";
//    for(int i=0;i<5;i++)
//    {
//        printf("%s\n",str[i]);
//    }
//    
////    for(int i=0;i<5;i++)
////    {
////        scanf("%s",str[i]);
////    }//试图修改代码区
//    
//    char str6[5][20]={"aaa","bbb","ccc","ddd","eee"};
//    for(int i=0;i<5;i++)
//    {
//        printf("请输入第%d个字符串：",i+1);
//        scanf("%s",str6[i]);
//    }
    
    //从键盘输入三个人的名字，然后输出
    
    char name[3][30];
    for(int i=0;i<3;i++)
    {
        printf("请输入第%d个人的名字：",i+1);
        scanf("%s",name[i]);
    }
    printf("这三个人是：\n");
    for(int i=0;i<3;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}
