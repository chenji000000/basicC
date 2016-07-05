//
//  11.c
//  day08
//
//  Created by student on 15-9-10.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int b;
    b=a[0];
    for(int i=0;i<9;i++)
    {
        a[i]=a[i+1];
    }
    a[9]=b;
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
