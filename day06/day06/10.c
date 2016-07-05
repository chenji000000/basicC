//
//  10.c
//  day06
//
//  Created by student on 15-9-8.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    //正向遍历
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    //反响遍历
    for(int i=9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    //从终端输入一个整数，如12325，判断这个整数中是否有重复的数字
    
    
    int s;
    printf("输入一个数字：");
    scanf("%d",&s);
    bool x[10]={0};
    do
    {
        int n=s%10;
        if(x[n]==1)
        {
            printf("重复了\n");
            break;
        }
        x[n]=1;
        s/=10;
    }while(s);
      if(s==0)
      {
          printf("没有重复\n");
        
      }
    printf("\n");
    
    
    
    return 0;
}

//统计重复多少次
