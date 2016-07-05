//
//  02.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "02_第一个人.h"
#include "02_第二个人.h"
#include "02_第三个人.h"
#include "02_第四个人.h"

int main()
{
    srand((unsigned)time(0));
    int a[10];
    input(a,10);//第一个人
    int max=maxValue(a,10);//第二个人
    int min=minValue(a,10);//第三个人
    output(a,10);//第四个人
   
    
    printf("max=%d,min=%d\n",max,min);
}
