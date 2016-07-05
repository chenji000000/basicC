//
//  03.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    long long int i4;
    printf("%ld\n",sizeof(i4));
    i4=4567890123;//-2^63~2^63-1
    printf("%lld\n",i4);
    
    return 0;
}

