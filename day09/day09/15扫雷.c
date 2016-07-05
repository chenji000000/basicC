//
//  15扫雷.c
//  day09
//
//  Created by student on 15-9-11.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("请输入雷区大小：");
    scanf("%d",&n);
    int area[n][n];
    srand((unsigned)time(0));
    int mineNumber=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(rand()%5==0){
                area[i][j]=-1;
            mineNumber++;
        }
      else
          area[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(area[i][j]==-1){
                continue;
            }
    int sum=0;
    if(i>0&&j>0&&area[i-1][j-1]==-1)
        sum++;
    if(i>0&&area[i-1][j]==-1)
        sum++;
    if(i>0&&j<n-1&&area[i-1][j+1]==-1)
        sum++;
    if(j<n-1&&area[i][j+1]==-1)
        sum++;
    if(i<n-1&&j<n-1&&area[i+1][j+1]==-1)
        sum++;
    if(i<n-1&&area[i+1][j]==-1)
        sum++;
    if(i<n-1&&j>0&&area[i+1][j-1]==-1)
        sum++;
    if(j>0&&area[i][j-1]==-1)
        sum++;
        area[i][j]=sum;
        }
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("@\t");
    }
        printf("\n");
    }
    
    bool selected[n][n];
    memset(selected,0,sizeof(selected));
    while(1)
    {
    int row,col;
    printf("请扫雷（m,n）:");
    scanf("%d,%d",&row,&col);
    selected[row][col]=true;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(selected[i][j]==true)
        {
        if(area[i][j]==-1)
            printf("*\t");
        else if(area[i][j]==0)
            printf("#\t");
        else if(area[i][j]!=-1||area[i][j]!=0)
            printf("%d\t",area[i][j]);
        }
        else
            printf("@\t");
        }
        printf("\n");
    }
    
    if(area[row][col]==-1)
    {
        printf("炸了\n");
        return 0;
    }
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(selected[i][j]==false)
        {
            count++;
        }
        }
    }
    if (mineNumber==count)
    {
        printf("你赢了\n");
        return 0;
    }
    }
    
    return 0;
}
