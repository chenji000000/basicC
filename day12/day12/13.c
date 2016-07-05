//
//  13.c
//  day12
//
//  Created by student on 15-9-16.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
//    clock_t t=clock();//返回从这个函数被启动开始到clock函数被调用时的cpu时钟数（毫秒作为单位）
//    printf("%lu\n",t);
//    clock_t start, finish;
//    int i=100000000;
//    start=clock();
//    while(i--);
//    finish=clock();
//    double times=finish-start;
//    printf("%g毫秒\n",times);
//    times=times/CLOCKS_PER_SEC;
//    printf("%lf秒\n",times);
//    
//    time_t t1;
//    time(&t1);
//    printf("%s\n",ctime(&t1));
//    sleep(2);
//    time_t t2;
//    time(&t2);
//    printf("%f秒\n",difftime(t2,t1));
//
//    struct tm *lm=localtime(&t1);
//    
//    char buffer[80];
//    strftime(buffer,80,"%Y年%m月%d日 %H时:%M:%S",lm);
//    printf("%s\n",buffer);
 
    //秒表
    clock_t t1,t2;
    t1=clock();
    while(1)
    {
        t2=clock();
        if((t2*1.0-t1)/CLOCKS_PER_SEC>1)
        {
            time_t t;
            time(&t);
            printf("%s",ctime(&t));
        }
    }
    
    return 0;
}
