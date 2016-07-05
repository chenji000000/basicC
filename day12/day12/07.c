//
//  07.c
//  day12
//
//  Created by student on 15-9-16.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p=(int*)malloc(sizeof(int)*3);
    for(int i=0;i<3;i++)
    {
        p[i]=i+1;
    }
    for(int i=0;i<3;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
    p=(int*)realloc(p,sizeof(int)*5);
    p[3]=4;
    p[4]=5;
    for(int i=0;i<5;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}
