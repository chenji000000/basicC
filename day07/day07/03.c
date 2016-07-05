//
//  03.c
//  day07
//
//  Created by student on 15-9-9.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[10]={2,7,4,6,3,4,8,1,9,0};
    for(int i=0;i<10;i++)
    {
        int j;
        for(j=i+1;j<10;j++)
        {
            
        if(a[i]==a[j])
            {
                printf("第%d个和第%d个元素重复了\n",i+1,j+1);
                break;
            }
         }
    if (j<10)
      {
        break;
      }
    }
    return 0;
}
