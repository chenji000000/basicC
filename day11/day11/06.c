//
//  06.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

union Example//节省存储空间，必须排他性的使用
{
    int x;
    int y;
    int z;
};

union Data
{
    char ch[4];
    int x;
};

int main()
{
    union Example a;
    printf("%ld\n",sizeof(a));
    a.x=100;
    printf("%d,%d,%d\n",a.x,a.y,a.z);
    a.y=200;
    printf("%d,%d,%d\n",a.x,a.y,a.z);
    
    union Data data;
    data.x=0x41424344;//对于十六进制两位构成一个字节
    for(int i=0;i<4;i++)
    {
        printf("%#x ",data.ch[i]);
    }
    printf("\n");
    
    return 0;
}
