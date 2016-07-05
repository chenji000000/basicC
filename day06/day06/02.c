//
//  02.c
//  day06
//
//  Created by student on 15-9-8.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    for (int i=1;i<10;i++)
    {
    if(i%2==0)
    {
        continue;
    }
        printf("%d ",i);
    }
    printf("\n");
    
//(选做)100以内7的倍数和所有含7的数排除

for(int i=1;i<=100;i++)
{
if(i%7==0||i/10==7||(i-7)%10==0)
{
    continue;
}
    printf("%d ",i);
}
    printf("\n");
    return 0;
}
