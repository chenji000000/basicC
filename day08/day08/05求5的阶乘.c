//
//  05.c
//  day08
//
//  Created by student on 15-9-10.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int fn(int x)
{
if(1==x)
    return 1;
return x*fn(x-1);

}

int main()
{
    printf("5！=%d\n",fn(5));
    return 0;
}
