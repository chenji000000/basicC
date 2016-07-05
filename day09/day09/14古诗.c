//
//  14古诗.c
//  day09
//
//  Created by student on 15-9-11.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    char* poem[4][6]={
    {"守","法","朝","朝","优","闷"},{"强","梁","夜","夜","欢","歌"},{"修","桥","补","路","瞎","眼"},{"杀","人","放","火","儿","多"}
    };
    for (int i=0;i<6;i++)
    {
        for(int j=3;j>=0;j--)
        {
            printf("%s",poem[j][i]);
        }
        printf("\n");
    }
    return 0;
}
