//
//  11结构体.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

struct data{
    int a,b,c;
};

int main()
{
    struct data s[2]={{1,2,3},{4,5,6}};
    int t;
    t=s[0].a+s[1].b;
    printf("t=%d\n",t);
    return 0;
}
