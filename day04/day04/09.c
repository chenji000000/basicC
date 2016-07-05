//
//  09.c
//  day04
//
//  Created by student on 15-9-6.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int score;
    printf("请输入一个分数:");
    scanf("%d",&score);
   if(score<0)
   {
       printf("成绩错误\n");
       return 0;
   }
    
    if(score>100)
    {
        printf("成绩错误\n");
        return 0;
    }
    
   if(score>=90)
    {
        printf("优\n");
    }
    else if(score>=60)
    {
        printf("一般\n");
    }
    else
    {
        printf("不及格\n");
    }
    
    
    return 0;
    
}
