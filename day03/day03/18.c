//
//  18.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    double money=3.0;
    double price=2.9;
    printf("change=%.18lf\n",money-price);//二进制无法精确表示十分之一

    return 0;
}
