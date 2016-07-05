//
//  03.c
//  day12
//
//  Created by student on 15-9-16.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

typedef enum
{
    INT,FLOAT,DOUBLE,CHAR,
}Type;

void print(void* p,Type type)
{
    switch(type)
    {
        case 0:
            printf("%d\n",*(int*)p);
            break;
        case 1:
            printf("%f\n",*(float*)p);
            break;
        case 2:
            printf("%lf\n",*(double*)p);
            break;
        case 3:
            printf("%c\n",*(char*)p);
            break;
            
    }


}

int main()
{
    int a=10;
    print(&a,INT);
    float f=3.14;
    print(&f,FLOAT);
    double d=2.68;
    print(&d,DOUBLE);
    char c='a';
    print(&c,CHAR);
    return 0;
}
