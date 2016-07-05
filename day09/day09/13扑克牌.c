//
//  13.c
//  day09
//
//  Created by student on 15-9-11.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(0));
    char suit[4]={'s','H','F','c'};
    char rank[13]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    
    int count;
    printf("请输入你要的张数：");
    scanf("%d",&count);
    
    char oldS[count];
    char oldR[count];
    for(int i=0;i<count;i++)
    {
    int s=rand()%4;
    int r=rand()%13;
    int j=0,k=i;
        for(;j<i;j++)
        {
            if (oldS[j]==suit[s]&&oldR[j]==rank[r])
            {
                i--;
                break;
            }
        }
        if(j==k)
        {
    printf("%c%c ",suit[s],rank[r]);
            oldS[i]=suit[s];
            oldR[i]=rank[r];
        }
        
    }
    printf("\n");
    
    return 0;
}
