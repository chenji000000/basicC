//
//  10.c
//  day07
//
//  Created by student on 15-9-9.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

//写一个函数，判断参数x和y是否都落在0~n的闭区间
bool check(int x,int y,int n)//函数头
{
    return x>=0&&x<=n&&y>=0&&y<=n;

}

//写一个函数，判断一个整数是不是素数
bool isPrimer(int x)//函数类型\函数名\函数参数
{
    if (x<2)
        return false;
    
    for (int i=2;i<x;i++)
    {
      if(x%i==0)
      {
          return false;
      }
    }
    return true;
}

int main()
{
    bool in=check(3,5,4);
    printf("%d\n",in);
    return 0;
}
