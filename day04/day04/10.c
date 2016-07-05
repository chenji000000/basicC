//
//  10.c
//  day04
//
//  Created by student on 15-9-6.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

int main()
{//与运算
    int a=3;
    int b=4;
    int result;
    result=a&&b;
    printf("%d\n",result);
    a=0;
    result=a&&b;
    printf("%d\n",result);
    
    bool result1;
    int c=5;
    result1=a>b&&b>c;//result1=((a>b)&&(b>c));
    printf("%d\n",result1);
    
    //0<=score<=100
    int score;
    ;//输入百分制成绩
    //if(0<=score<=100)
    if(score>=0&&score<=100)
    {
        ;//正常处理
    }
    
    //或运算
    a=3;
    b=4;
    result1=a||b;
    printf("%d\n",result1);
    a=0;
    result1=a||b;
    printf("%d\n",result1);
    b=0;
    result1=a||b;
    printf("%d\n",result1);
    c=5;
    result1=a<b||b>c;//result1=((a<b)||(b>c))
    printf("%d\n",result1);
    
    //score<0||score>100;

    //非运算
    a=3;
    result1=!a;
    printf("%d\n",result1);
    result1=!result1;
    printf("%d\n",result1);
    b=4;
    result1=!(a>b);
    printf("%d\n",result1);
    result1=!(a+b);
    printf("%d\n",result1);
    result1=!"abc";
    printf("%d\n",result1);
    
    a=3;
    b=4;
    c=5;
    result1=a>b&&b>c++&&c>a++;
    printf("a=%d,b=%d,c=%d,result1=%d\n",a,b,c,result1);
    result1=a<b&&b>c++&&c>a++;
    printf("a=%d,b=%d,c=%d,result1=%d\n",a,b,c,result1);
    
    return 0;
}
