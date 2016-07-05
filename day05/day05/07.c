//
//  07.c
//  day05
//
//  Created by student on 15-9-7.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    double pai=0;
    for(int i=1;i<1000000000;i+=4)
    {
        pai+=1*1.0/i;
    }
    double pai1=0;
    for(int i=3;i<1000000000;i+=4)
    {
        pai1+=1*1.0/i;
    }
    pai=4*(pai-pai1);
    printf("%lf\n",pai);
    
    return 0;
}
