//
//  02.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x=10;
    x+=5;//等效于x=x+5;
    printf("x=%d\n",x);
    x-=5;//等效于x=x-5;
    printf("x=%d\n",x);
    x*=5;//等效于x=x*5;
    printf("x=%d\n",x);
    x/=5;//等效于x=x/5;
    printf("x=%d\n",x);
    
    x*=5+3;//x=x*(5+3);
    printf("x=%d\n",x);
    
    return 0;
}
