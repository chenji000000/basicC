//
//  02_第三个人.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include "02_第三个人.h"

int minValue(int data[],int size)
{
    int min=data[0];
    for(int i=1;i<size;i++)
    {
        if(min>data[i])
        {
            min=data[i];
        }
    }
    return min;
}

