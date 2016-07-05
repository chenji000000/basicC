//
//  17.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    double a=3.14;//double常量
    a=.314;//0.314
    float f=3.14f;//dloat常量
    long double ld=3.14L;//long double常量
    
    a=2.8E2;//2.8*10^2,科学计数法
    printf("%lf\n",a);
    printf("%g\n",a);
    printf("%e\n",a);
    
   //a=E5;
    a=1E5;//OK
    
    
    return 0;
}
