//
//  22.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{int a=10;
    int b=20;
    int result=a+b;
    printf("%d\n",result);
    result=a-b;
    result=a*b;
    result=a/b;
    printf("%d\n",result);
    
    float result1=a/b;
    result1=a*1.0/b;
    printf("%f\n",result1);
    
    a=5;
    b=3;
    result=a%b;
    printf("%d\n",result);
    printf("100%%12=%d\n",100%12);
    //余数的符号仅与被除数相同，与除数无关
    printf("%d\n",5%3);
    printf("%d\n",-5%3);
    printf("%d\n",5%-3);
    printf("%d\n",-5%-3);
    
    10.5%3;//浮点数不能求余
    
    
    return 0;
}
