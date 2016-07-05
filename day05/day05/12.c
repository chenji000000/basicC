//
//  12.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int code;
    int i=0;
    do
    {
        printf("输入密码：");
        scanf("%d",&code);
    }while(code!=123456);
    
    printf("登陆成功\n");//登录三次自动锁定
    
    return 0;
}
