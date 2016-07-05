//
//  05malloc函数.c
//  day12
//
//  Created by student on 15-9-16.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    int* p=&a;
    printf("a=%d\n",*p);
    
    p=(int*)malloc(sizeof(int));//(malloc向堆申请存储空间，malloc返回值是void*)mallo函数为指针p分配了4个字节的存储空间，位于堆空间中
    *p=10;
    printf("*p=%d\n",*p);
    *p=20;
    printf("*p=%d\n",*p);
    free(p);//释放指针p所指向的存储空间
    
    float* p1;
    p1=(float*)malloc(sizeof(float));
    *p1=3.14;
    printf("%f\n",*p1);
    *p1=2.68;
    printf("%f\n",*p1);
    
    char* p2;
    p2=(char*)malloc(sizeof(char));
    *p2='a';
    printf("%c\n",*p2);
    
    long* p3;
    p3=(long*)malloc(sizeof(long));
    *p3=123456789012345;
    printf("%ld\n",*p3);
    
    free(p1);//如果不释放，将造成内存泄露，泄露的多会使手机死机
    free(p2);
    free(p3);
    
    printf("%p\n",p1);//野指针：指向无效地址的指针
    *p1=5.67;
    //...
    printf("%f\n",*p1);
    
    int* p4;
    p4=(int*)malloc(sizeof(int)*5);//使用malloc申请一个数组
    *(p4+0)=100;
    *(p4+1)=200;
    *(p4+2)=300;
    *(p4+3)=400;
    *(p4+4)=500;
    for(int i=0;i<5;i++)
    {
        printf("%d ",p4[i]);
    }
    printf("\n");
    
    
    int size;
    printf("请输入数组的长度：");
    scanf("%d",&size);
    int* p5;
    p5=(int*)malloc(sizeof(int)* size);
    for(int i=0;i<size;i++)
    {
        p5[i]=(i+1)*10;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",p5[i]);
        
    }
    printf("\n");
    
    struct Data
    {
        int x;
        char ch;
    };
    struct Data* p6;
    p6=(struct Data*)malloc(sizeof(struct Data));
    p6->x=10;
    p6->ch='d';
    printf("%d,%c\n",p6->x,p6->ch);
    
    free(p5);
    free(p6);
    
    return 0;
}
