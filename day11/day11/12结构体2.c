//
//  12结构体2.c
//  day11
//
//  Created by student on 15-9-15.
//  Copyright (c) 2015年 tarena. All rights reserved.
//

#include <stdio.h>

struct Stu
{
    char name[10];
    int num;
    int Score;
};

int main()
{
    struct Stu s[5]={
        {"YangSan",20041,703},{"LiSiGuo",20042,580},{"wangYin",20043,680},{"SunDan",20044,550},{"Penghua",20045,537}};
    
struct Stu *p[5];
   for(int i=0;i<5;i++)

    p[i]=&s[i];

for (int i=0;i<4;i++)
for(int j=i+1;j<5;j++)
if(p[i]->Score>p[j]->Score)
{
    struct Stu* t=p[i];
    p[i]=p[j];
    p[j]=t;
}
printf("%d %d\n",s[1].Score,p[1]->Score);
     return 0;
}
