//
//  04.c
//  day06
//
//  Created by student on 15-9-8.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    //外循环打印五行星
    for (int j=0;j<5;j++)
    {
        //内循环打印一行星
    for (int i=0;i<10;i++)
    {
        printf("* ");
    }
    printf("\n");
    }
    
    /*
     **
     ***
     ****
     *****/
    
    for(int j=1;j<=5;j++)
    {
        for(int i=0;i<j;i++)
        {
            printf("*");
            
         }
        printf("\n");
    }
    
    /*------------
     1*1=1
     1*2=2  2*2=4
     1*3=3  2*3=6  3*3=9
     1*4=4  2*4=8  3*4=12  4*4=16
     ...
     --------------*/
    
    for (int i=1;i<=9;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d*%d=%d\t",j,i,i*j);
        }
        printf("\n");
    }
    
    for (int i=1;i<=4;i++)
    {
        for (int z=1;z<=4-i;z++)
        {
            printf(" ");
        }
        for (int y=0;y<2*i-1;y++)
        {
            printf("*");
        }
        printf("\n");
    }
    //(选做)
    /*----------
     *
     * *
     *   *
     *******
     ---------*/
    

    