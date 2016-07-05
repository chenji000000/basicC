//
//  03.c
//  day04
//
//  Created by student on 15-9-6.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r=1;//真
    r=0;//假
    r=123;//真
    r=-56;//真
    r=3.14;//真
    
    bool r2;
    printf("%ld\n",sizeof(r2));
    r2=1;
    printf("%d\n",r2);
    r2=true;//r2=1;
    printf("%d\n",r2);
    r2=false;//r2=0;
    printf("%d\n",r2);
    r2=200;
    printf("%d\n",r2);
    r2=2;
    printf("%d\n",r2);
    
    int a=3;
    int b=4;
    r2=a==b;
    printf("%d\n",r2);
    //r2=a==4;//如果一个变量和一个常量，常量写左边
    r2=4==a;
    printf("%d\n",r2);
    return 0;
}