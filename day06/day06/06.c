//
//  06.c
//  day06
//
//  Created by student on 15-9-8.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x=10;//变量的初始化
    
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    int d[10]={1,2,3,4,5};//当初始化的值小于数组长度时，其余的元素被初始化成0
    for(int i=0;i<10;i++)
    {
        printf("%d ",d[i]);
    }
    printf("\n");
    
    int e[10]={0};//对数组的所有元素初始化成0；
    
    int f[10]={};
    
    int g[5]={1,2,3,4,5,6,7};//多余的初始化值会被直接丢弃
    for(int i=0;i<7;i++)
    {
        printf("%d ",g[i]);
    }
    printf("\n");
    
    
    int h[]={1,2,3,4,5};//当初始化的值得个数等于数组长度时，数组长度可以不写出来
    
    //c99新增加的方法
    int j[5]={[2]=20,[0]=50,[4]=40};
    for(int i=0;i<5;i++)
    {
        printf("%d ",j[i]);
    }
    printf("\n");
    
    int k[]={[3]=20,[5]=50,[1]=10};
    for(int i=0;i<6;i++)
    {
        printf("%d ",k[i]);
    }
    printf("\n");
    
    
    //定义一个长度为10的数组，将数组中所有元素都向前移动一个位置，把第一个元素移到最后一个元素
    
    
    int num[10]={1,2,3,4,5,6,7,8,9,0};
    int t=num[0];
    
    for(int i=0;i<9;i++)
    {
        num[i]=num[i+1];
    }
    num[9]=t;
    for(int i=0;i<10;i++)
    {
    printf("%d ",num[i]);
    }
    
    
    return 0;
}

