//
//  07.c
//  day09
//
//  Created by student on 15-9-11.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

void print(int data[10],int size)//当数组作为函数的形参时，数组会退化成指针
{
    printf("%ld\n",sizeof(data));

    for(int i=0;i<size;i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
}

void inc(int* a,int size)
{
    for (int i=0;i<size;i++)
    {
        a[i]++;//(*(a+i))++
    }
}

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    printf("%ld\n",sizeof(a));
    print(a,10);
    
    int b[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    print(b,20);
    
    
    inc(a,10);
    print(a,10);
    
    print((int [3]){1,2,3},3);
    return 0;
}
