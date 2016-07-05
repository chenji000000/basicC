//
//  19函数.c
//  day09
//
//  Created by student on 15-9-13.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

char st[]="hello,friend!";

void func1(int i)
{
    printf("%c",st[i]);
    if(i<3)
    {
        i+=2;
        func2(i);
    }
}
void func2(int i)
{
    printf("%c",st[i]);
    if(i<3)
    {
        i+=2;
        func1(i);
    }
}

int main()
{
    int i=0;
    func1(i);
    printf("\n");
    
    return 0;
}


