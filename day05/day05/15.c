//
//  15.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//


//登录三次自动锁定

#include <stdio.h>
int main()
{
    int code;
    int i=0;
   while(code!=123456)
    {
        printf("输入密码：");
        scanf("%d",&code);
        i++;
        if(i==3)
        {
            break;
        }
        
    }
    if(i==3&&code!=123456)
    {
        printf("密码被锁定\n");
    }
    else
    {
      printf("登陆成功\n");
    }
    return 0;
}
