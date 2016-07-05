//
//  05.c
//  day06
//
//  Created by student on 15-9-8.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int score1=98;
    int score2=98;
    int score3=98;
    
    int score[500];
    
    
    int a[5];
    printf("%ld\n",sizeof(a));
    a[-1]=0;//上标上越界
    a[0]=10;//0是下标
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;
    a[5]=60;//下标下越界
    //a[12345]=70;
    
    
    for(int i=0;i<5;i++)
    {
        a[i]=(i+1)*10;
    }
    
    for (int i=0;i<500;i++)
    {
        scanf("%d",&a[i]);
    }
        
    for (int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
