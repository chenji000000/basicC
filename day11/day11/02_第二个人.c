//
//  02_第二个人.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include "02_第二个人.h"

int maxValue(int data[],int size)
{
int max=data[0];
for(int i=1;i<size;i++)
{
    if(max<data[i])
    {
        max=data[i];
    }
}
return max;
}