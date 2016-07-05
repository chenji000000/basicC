//
//  11.c
//  day07
//
//  Created by student on 15-9-9.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

//写一个函数，求一个整数的平方
int power(int x);//函数的声明


//写一个函数，在三个整数中找到中间那个数
int check(int x,int y,int z)
{
   if(x<y)
   {
       if(y<z)
           return y;
       else if(x<=z)
           return z;
       else
           return x;
    }
    else if(z<y)
        return y;
    else if(x<=z)
        return x;
    else
        return z;
        
}

int main()
{
    int n=power(10);
    printf("%d\n",n);
    
   int n=check(10,29,39);
    printf("%d\n",n);
    
    return 0;
}
int power(int x)
{
    return x*x;
}

