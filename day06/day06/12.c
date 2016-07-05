//
//  12.c
//  day06
//
//  Created by student on 15-9-8.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{for (int i=1;i<=4;i++)
{
    for (int z=1;z<=4-i;z++)
    {
        printf(" ");
    }
    for (int y=0;y<2*i-1;y++)
    {
        if (i==2&&y==1)
        {
            printf(" ");
            continue;
        }
        else if (i==3&&(y==1||y==2||y==3))
        {
            printf(" ");
            continue;
        }
        printf("*");
    }
    printf("\n");
}
        return 0;
  }
