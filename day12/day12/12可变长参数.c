//
//  12.c
//  day12
//
//  Created by student on 15-9-16.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>

int sum(int n, ...)
{
    int sum=0;
    
    va_list vap;
    va_start(vap,n);

    for(int i=0;i<n;i++)
    {
        sum+=va_arg(vap,int);
    }
    
    va_end(vap);
    return sum;
}


int main()
{
    int a=10;
    printf("%d\n",a);
    int b=20;
    printf("%d,%d\n",a,b);
    
    int s=sum(3,10,20,30);
    printf("sum=%d\n",s);
    s=sum(10,1,2,3,4,5,6,7,8,9,10);
    printf("sum=%d\n",s);
    
    return 0;
}
