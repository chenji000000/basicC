//
//  07.c
//  day04
//
//  Created by student on 15-9-6.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    char ziMu;
    printf("输入一个字母：");
    scanf("%c",&ziMu);
    if(ziMu>='a')
    {
        if (ziMu<='z')
        {
        printf("%c\n",ziMu-'a'+'A');
            }
        else
        {
            printf("%c\n",ziMu);
            }
    }
    else
    {
        printf("%c\n",ziMu);
    }
    return 0;
}
