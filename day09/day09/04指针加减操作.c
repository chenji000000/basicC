//
//  04.c
//  day09
//
//  Created by student on 15-9-11.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[5]={10,20,30,40,50};
    
    int* p1=&a[0];
    int* p2=&a[4];
    printf("%d\n",*p1);
    
    printf("%d\n",*(p1+1));
    printf("%d\n",*(p1+2));//指针可以加上一个整数，指向了下面
    
    p1++;//p1必须是左值
    printf("%d\n",*p1);
    p1+=3;
    printf("%d\n",*p1);
    
    printf("%d\n",*(p2-2));
    p2--;//p2=p2-1;
    printf("%d\n",*p2);
    p2-=3;
    printf("%d\n",*p2);
    
    p1=&a[0];
    p2=&a[4];
    int f=*(p1++);
    //f=*p1;
    //p1=p1+1;
    printf("f=%d,*p1=%d\n",f,*p1);
    f=*(++p1);
    //p1=p1+1;
    //f=p1;
    printf("f=%d,*p1=%d\n",f,*p1);
    f=(*p1)++;
    //f=*p1;
    //*p1=*p1+1;
    printf("f=%d,*p1=%d\n",f,*p1);
    
    return 0;
}
