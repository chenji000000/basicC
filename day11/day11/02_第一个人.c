//
//  02_第一个人.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include "02_第一个人.h"
#include <stdlib.h>

void input(int data[],int size)
{
    for (int i=0;i<10;i++)
    {
        data[i]=rand()%101;
    }
}
