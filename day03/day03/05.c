//
//  05.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    unsigned short int i6;
    printf("%ld\n",sizeof(i6));
    i6=65535;//0~2^16-1
    printf("%hu\n",i6);
    return 0;
}