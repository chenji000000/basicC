//
//  06.c
//  day08
//
//  Created by student on 15-9-10.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void f()
{
    static int x=0;
    x++;
    
}

int main()
{
    srand((unsigned)time(0));
    int n;
    printf("输入放球个数：");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        f();
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=rand()%n+1;
        for(int j=0;j<i;j++)
        {
        if(b[i]==b[j])
        {
            i--;
            break;
        }
        
        }
    }
    printf("取出的球依次为:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    
    return 0;
}
