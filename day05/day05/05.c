//
//  05.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
   
    printf("请选择功能:\n");
    printf("1.显示全部记录\n");
    printf("2.查询登录信息\n");
    printf("3.退出\n");
    
    int command;
    scanf("%d",&command);
    switch(command)
    {
        case 1:
            printf("显示全部记录\n");
            break;
        case 2:
            printf("查询登录记录\n");
            break;
        case 3:
             printf("退出\n");
            break;
        default:
            printf("输入错误\n");
            break;
    }
    
    
    return 0;
    
}
