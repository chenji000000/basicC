//
//  08.c
//  day10
//
//  Created by student on 15-9-14.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
//缺点：代码变长
#define max(x,y) ((x)>(y)?(x):(y))//最大值
#define IS_EVEN(x) ((x)%2==0)//判断奇偶
#define UPPER(ch) ((ch)>='a'&&(ch)<='z'?(ch)-'a'+'A':(ch))//小写转大写
#define SWAP(T,x,y) {T t=(x);(x)=(y);(y)=t;}//交换变量
int main()
{
    printf("max=%d\n",max(3,4));
    printf("%d\n",IS_EVEN(6));
    printf("%c\n",UPPER('g'));
    
    int a=10;
    int b=20;
    printf("a=%d,b=%d\n",a,b);
    SWAP(int,a,b);
    printf("a=%d,b=%d\n",a,b);
    
    double x=3.14;
    double y=2.68;
    printf("x=%lf,y=%lf\n",x,y);
    SWAP(double,x,y);
    printf("x=%lf,y=%lf\n",x,y);

    return 0;
}
