//
//  01.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

#define DEBUG 0
#define IA64
#define IA32
#define LLVM3

int main()
{int sum=0;
    for(int i=1;i<=100;i++)
    {
        sum+=i;
#if DEBUG//#if后面接具体的值
        printf("i=%d,sum=%d\n",i,sum);//调试语句
#endif
    }
    printf("sum=%d\n",sum);
    
#ifdef IA64//#ifdef后面可以接不具体的值，直接写宏名
    printf("系统是64位的\n");
#else
    printf("系统是32位的\n");
#endif
    
#ifndef IA32
    printf("系统是64位的\n");
#else
    printf("系统是32位的\n");
#endif
    
#if defined LLVM4
    printf("LLVM4\n");
#elif defined LLVM3
    printf("LLVM3\n");
#elif defined LLVM2
    printf("LLVM2\n");
#endif
    
#undef IA32//将以定义的宏名IA32删除，删除已存在的宏名
#ifndef IA32
    printf("没有宏名IA32\n");
#endif
    
    return 0;
}
