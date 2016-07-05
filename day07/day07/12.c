//
//  12.c
//  day07
//
//  Created by student on 15-9-9.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

//求两个数的平均数
double ave(double x,double y)
{
    return (x+y)/2;
}

int main()
{
    double x=5;
    double y=7;
    double z=10;
    double xy=ave(x,y);
    double xz=ave(x,z);
    
    printf("%lf\n",ave(xy,xz));
    
    printf("%lf\n",ave(x,(y+z)/2));
    
    printf("%lf\n",ave(x,ave(y,z)));
    
    return 0;
}
