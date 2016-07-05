//
//  1.c
//  day04
//
//  Created by student on 15-9-6.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{//函数体
    int x=10;
    x++;//等效于x=x+1
    printf("x=%d\n",x);
    ++x;//等效于x=x+1
    printf("x=%d\n",x);
    x--;//等效于x=x-1
    printf("x=%d\n",x);
    --x;//等效于x=x-1
    printf("x=%d\n",x);
    
    
    int y;
    x=10;
    y=x++;//等效于以下两句
    //y=x;
   // x=x+1;
    printf("x=%d,y=%d\n",x,y);
    
    x=10;
    y=++x;//等效于以下两句
    //x=x+1;
    //y=x;
    printf("x=%d,y=%d\n",x,y);
    
    int a=3,b=4,c;
    c=a+++b;//等效于以下两句
    //c=a+b;
    //a=a+1;
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    return 0;
}
