//
//  10.c
//  day03
//
//  Created by student on 15-9-2.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x;
    x=100;//十进制
    printf("%d\n",x);
    x=0100;//八进制
    printf("%d\n",x);
    printf("%#o\n",x);
    
    x=0x100;//十六进制
    printf("%d\n",x);
    printf("%#x\n",x);
    
    
    return 0;
}
