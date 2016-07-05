//
//  16.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    long double ld;
    printf("%ld\n",sizeof(ld));
    ld=3.14;//10^-4932~10^4951,精度16位
    printf("%Lf\n",ld);
    
    return 0;
}
