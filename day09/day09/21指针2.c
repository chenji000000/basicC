//
//  21指针.c
//  day09
//
//  Created by student on 15-9-13.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5};
    int x,y,*p;
    p=&a[0];
    x=*(p+2);
    y=*(p+4);
    printf("*p=%d,x=%d,y=%d",*p,x,y);
    return 0;
}


