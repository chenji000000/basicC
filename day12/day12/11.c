//
//  11.c
//  day12
//
//  Created by student on 15-9-16.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main()
{
    int i=10;
    char string[100];
    
    sprintf(string,"%d",i);
    printf("%s\n",string);
    
    double d=123.45678901234;
    sprintf(string,"%.11lf",d);//"%.14g"
    printf("%s\n",string);
    
    long l=123456789012345;
    sprintf(string,"%ld",l);//将数据转换成字符串
    printf("%s\n",string);
    printf("%c\n",string[5]);
    
    strcpy(string,"100");
    sscanf(string,"%d",&i);//将字符串转换成数据
    printf("%d\n",i);
    
    strcpy(string,"654.321");
    sscanf(string,"%lf",&d);
    printf("%g\n",d);
    
    strcpy(string,"9876543210987");
    sscanf(string,"%ld",&l);
    printf("%ld\n",l);
    
    return 0;
}


