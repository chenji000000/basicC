//
//  03.c
//  day09
//
//  Created by student on 15-9-11.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

int add10(int x)
{
    x+=10;
    return x;
    }

int* add11(int* x)
{
    (*x)+=11;
    return x;
}

int* get()
{
    int x=12345;
    return &x;//局部变量的地址不能被返回，因为返回后是个无效的地址
}

void get2()
{
    int y=54321;
}

int* get3()
{
    static int z=22222;
    return &z;
}



int main()
{
    int a=1;
    int result=add10(a);
    printf("%d\n",result);
    
    int *pa=add11(&a);
    printf("%d\n",*pa);
    
    int* pi2=get();
    printf("%d\n",*pi2);
    
    pi2=get();
    get2();
    printf("%d\n",*pi2);
    
    pi2=get3();
    get2();
    printf("%d\n",*pi2);
    
    return 0;
}
