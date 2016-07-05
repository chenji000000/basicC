//
//  03.c
//  day06
//
//  Created by student on 15-9-8.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
int main()
{
    for(int i=0;i<10;i++)
    {
        printf("%d ",i);
        fflush(0);//强制执行
    }
    sleep(10);//让程序暂停10秒钟
    printf("\n");
    return 0;
}
