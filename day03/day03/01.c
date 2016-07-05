//
//  01.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    short int i1;
    printf("%ld\n",sizeof(i1));
    i1=32767;//2^15-1
    i1=-32768;//-2^15
    printf("i1=%hd\n",i1);
    
    return 0;
}
