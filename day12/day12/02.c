//
//  02.c
//  day12
//
//  Created by student on 15-9-16.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

void show(void* p,int bytes)
{
    for(int i=0;i<bytes;i++)
    {
        printf("%#x ",*(char*)p++);
    }
    printf("\n");
}

int main()
{
    int x=10;
    void* p=&x;
    //printf("x=%d\n",*p);//由于指针p是万能指针，所以*p就无法确定其数据类型，不能被使用，
    printf("x=%d\n",*((int*)p));
    *(int*)p=20;//先要把万能指针指向他要转的数据类型
    printf("x=%d\n",*((int*)p));
    
    float f=3.14;
    p=&f;
    printf("f=%f\n",*((float*)p));
    *(float*)p=2.68;
    printf("f=%f\n",*((float*)p));
    
    char* str="This is a string.";
    p=str;
    printf("%c\n",*(char*)p);
    printf("%s\n",(char*)p);
    
    x=12345;
    show(&x,sizeof(x));
    
    struct Data
    {
        char ch;
        int x;
    };
    
    struct Data d={'A',12345};
    show(&d,sizeof(d));
    
    return 0;
    
}
