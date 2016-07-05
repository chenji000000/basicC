//
//  04.c
//  day10
//
//  Created by student on 15-9-14.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//大小写兼容
int main()
{
    char* a[5]={"GuanYu","ZhangFei","ZhaoYun","MaChao","HuangZhong"};
    char b[20];
    printf("请输入一个名字：");
    scanf("%s",b);
    int i;
    for(i=0;i<5;i++)
    {
    if(strcmp(b,a[i])==0)
    {
        printf("%s是五虎上将\n",b);
        break;
    }
       
    }
   if(i==5)
       printf("%s不是五虎上将\n",b);
    
    
    return 0;
}
