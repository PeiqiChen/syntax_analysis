#ifndef _NODE_H_

#define _NODE_H_

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>
extern char *yytext;
extern int No_Line;//提供当前行数信息

struct Node
{
    char name[25];
    struct node *brother;
    struct node *child;
    int No_Line;
    int No_Child;
    int col;
    int IsBegin;
};
#endif
