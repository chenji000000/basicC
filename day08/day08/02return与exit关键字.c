//
//  02.c
//  day08
//
//  Created by student on 15-9-10.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int get(int x)
{
    return x;//返回调用处，并带回一个值
}

void printInt(int x)//函数类型为void时，函数没有返回值
{
    printf("x=%d\n",x);
}

void show(int x)
{
switch(x)
    {
        case 1:
            printf("x==1\n");
            return;
        case 2:
            printf("x==2\n");
            return;
        case 3:
            printf("x==3\n");
            return;//返回调用处
        case 4:
            exit(0);//终止程序的运行
    }
}

int main()
{
    int c=get(12345);
    printf("%d\n",c);
    
    show(2);
    printf("show(2)被调用了\n");
    show(4);
    printf("show(4)时，此句不执行\n");
    
    return 0;
}
