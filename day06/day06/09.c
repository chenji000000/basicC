//
//  09.c
//  day06
//
//  Created by student on 15-9-8.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[10];
    a[0]=10;//数组赋值时，只能逐个元素进行赋值，不能整体赋值
    a[3]=100;
    a[7]=500;
    
    int b[10]={1,2,3,4,5,6,7,8,9,0};//数组的拷贝
    for (int i=0;i<10;i++)
    {
        a[i]=b[i];
    
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    
    
    
    return 0;
}
