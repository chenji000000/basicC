//
//  04.c
//  day08
//
//  Created by student on 15-9-10.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

//求x的n次方
int power(int x,int n)
{
if(1==n)
{
    return x;
}
return x*power(x,n-1);
}

int main()
{
    
    printf("5的3次方为：%d\n",power(5,3));
    
    return 0;
}