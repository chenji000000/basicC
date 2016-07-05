//
//  03位运算.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
     printf("%d\n",5&3);
     printf("%d\n",5|3);
     printf("%d\n",~5);//-1-5=-6;
     printf("%d\n",~-5);//-1-(-5)=4;
     printf("%d\n",5^3);
    
    int a=1;
    a=a<<1;
    printf("%d\n",a);
    a=a>>1;
    printf("%d\n",a);
    a=-1;
    a=a>>1;
    printf("%d\n",a);
    
    
    return 0;
}
