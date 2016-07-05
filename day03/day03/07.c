//
//  07.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    unsigned long long int i8;
    printf("%ld\n",sizeof(i8));
    i8=456789012345;//0~2^64
    printf("%llu\n",i8);
    
    return 0;
}