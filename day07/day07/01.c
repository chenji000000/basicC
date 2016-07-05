//
//  01.c
//  day07
//
//  Created by student on 15-9-9.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(0));//为了每次运行时能生成不同的随机数，所以需要此句
    
    int x;
    x=rand();//rand函数能生成一个0~2147483647之间的随机数
    
    x=rand()%100;//0~99
    x=rand()%100+1;//1~100
    x=rand()%101;//0~100
    x=rand()%9+23;//23~31
    
    return 0;
}
