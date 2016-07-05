//
//  16.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a=1;
    int i=1;
   
    while(a<=100)
    {
        if(a%i!=0)
        {
            printf("%d\n",a);
            i++;
        }
    a++;
    }
    
    
    return 0;
}
