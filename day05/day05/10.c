//
//  10.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand((unsigned)time(0));
    int num;
    num=rand()%100+1;
    printf("%d\n",num);
    
    int guess=0;
    while(guess!=num)
    {
        printf("请输入你猜的数字(1~100):");
        scanf("%d",&guess);
        if(guess>num)
        {
        
            printf("大了\n");
        }
        else if(guess<num)
        {
            printf("小了\n");
        }
    }
    printf("恭喜你猜对了!\n");
    
    
    
    //num=rand()%9+13;
    
    return 0;
}
