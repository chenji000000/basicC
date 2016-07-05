//
//  06.c
//  day12
//
//  Created by student on 15-9-16.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p=(int*)malloc(sizeof(int)*5);
    p[4]=100;
    p=(int*)realloc(p,sizeof(int)*10);//realloc可以将指针p指向的空间变大
    p[9]=200;
    printf("%d,%d\n",p[4],p[9]);
    free(p);
    
    return 0;
}
