//
//  22指针3.c
//  day09
//
//  Created by student on 15-9-13.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i,b,c,a[]={1,10,-3,-21,7,13},*pb,*pc;
    b=c=1;
    pb=pc=a;
    for(i=0;i<6;i++)
    {
    if(b<*(a+i))
    {
        b=*(a+i);
        pb=&a[i];
    }
    if(c>*(a+i))
    {
        c=*(a+i);
        pc=&a[i];
    }
    }
    i=*a;
    *a=*pb;
    *pb=i;
    i=*(a+5);
    *(a+5)=*pc;
    *pc=i;
    printf("%d,%d,%d,%d,%d,%d\n",a[0],a[1],a[2],a[3],a[4],a[5]);
    
    return 0;
}



