//
//  02.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    long int i3;
    printf("%ld\n",sizeof(i3));
    i3=2147483648+1234567890;//-2^63~2^63-1
    printf("%ld\n",i3);
    
    return 0;
}
