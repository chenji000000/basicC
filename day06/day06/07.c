//
//  07.c
//  day06
//
//  Created by student on 15-9-8.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[10];//数组名a是数组的第一个元素的地址
    printf("%p\n",&a[0]);//第一个元素的地址
    printf("%p\n",a);//数组名中的地址
    
    a={1,2,3,4,5,6,7,8,9,0};//不能对数组进行整体操作，只能一个元素一个元素的来
    a[0]=1;
    
    a[10]={1,2,3,4,5,6,7,8,9,0};
    
    int b[10];
    b=a;//数组名是常量
    
    
    return 0;
}
