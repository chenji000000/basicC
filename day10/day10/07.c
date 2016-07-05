//
//  07.c
//  day10
//
//  Created by student on 15-9-14.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

#define MIN(x,y) ((x)<(y)?(x):(y))
#define IS_ODD(x) ((x)%2!=0)
#define LOWER(ch) ((ch)>='A'&&(ch)<='Z'?(ch)-'A'+'a':(ch))

#define PRINT(x,y) printf(#x"=%d,"#y"=%d\n",x,y)//#的作用是#后面替换完的参数挪到双引号里面，然后删除

int main()
{
    printf("MIN(3,4)=%d\n",MIN(3,4));
    int a=10;
    int b=5;
    printf("MIN(a,b)=%d\n",MIN(a,b));
    printf("%d\n",IS_ODD(5));
    a=16;
    printf("%d\n",IS_ODD(a));
    printf("%c\n",LOWER('G'));
    char c='H';
    printf("%c\n",LOWER(c));
    int x=100;
    int y=200;
    PRINT(x,y);
    
    a=300;
    b=400;
    PRINT(a,b);
    
    int m=500;
    int n=600;
    PRINT(m,n);

    return 0;
}
