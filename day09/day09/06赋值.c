//
//  06.c
//  day09
//
//  Created by student on 15-9-11.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    printf("a=%p,&a[0]=%p\n",a,&a[0]);
    
    int* p=a;//等效int* p=&a[0];
    printf("*p=%d\n",*p);
    printf("*a=%d\n",*a);
    p++;
    printf("*p=%d\n",*p);
    //a++;//数组名是常量，而常量不能做左值
    
    p=a;
    printf("%d\n",*(p+3));//p[3];
    for (int i=0;i<10;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");

    for (int i=0;i<10;i++)
    {
        printf("%d ",*(a+i));//a[i]=>*(a+i)
    }
    printf("\n");
   
    for (int i=0;i<10;i++)
    {
        printf("%d ",i[a]);//i[a]=>*(i+a)
    }
    printf("\n");
    
    p=a;
    for(int i=0;i<10;i++)
    {
        printf("%d ",*p++);
    }
    printf("\n");
    p=a;//注意：需要将指针p重新指回a[0]
    for(int i=0;i<10;i++)
    {
        printf("%d ",*p++);
    }
    printf("\n");
 
//    for(int i=0;i<10;i++)
//    {
//        printf("%d ",*a++);//a永远指向数据第一个元素，不能更改
//    }
//    printf("\n");

    
    return 0;
}

