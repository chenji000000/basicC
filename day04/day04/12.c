//
//  12.c
//  day04
//
//  Created by student on 15-9-6.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a=30;
    int b=20;
    int max=a>b?a:b;//等效于以下语句
    /*if(a>b)
     max=a;
     else
     max=b;
     */
    printf("max=%d\n",max);
    
    bool gender=true;
    printf("性别：%s\n",gender?"男":"女");
    
    //三目运算符的嵌套
    int x=10;
    int y=20;
    int z=30;
    int result=x<y?x:y++<z?y:z;//result=(x<y)?x:((y++<z)?y:z);
    printf("x=%d,y=%d,z=%d,result=%d\n",x,y,z,result);
    return 0;
    
}
