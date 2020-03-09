#include <sys/malloc.h>
#include <stdio.h>
#include "Node.h"

typedef struct Node* Item;
typedef struct node* Qnode;
typedef struct node
{
   Item data;
   Qnode next;
}Pnode;
typedef struct
{
  Qnode front;
  int  length;
}queue;
 
//新建队列
queue *newQueue()
{
  queue *p=(queue *)malloc(sizeof(queue));
  if (p==NULL)
  {
    printf("Error:out of memory.\n");
    return p;
  }
  else
    {p->front=NULL;
     p->length=0;
     return p;
    }
}
queue *NewQueue;
//查看队列是否为空
int IsEmpty(queue *p)
{
  if(p->length==0)
    return 1;
  else
    return 0;
}
//进栈
void EnQueue(queue *list,Item item)
{  
   Qnode p=(Qnode)malloc(sizeof(Pnode));
   if(p==NULL)
   {
    printf("Error:empty node.\n");
    return;
   }
   else
   { 
     p->data=item;
     if(IsEmpty(list))
      p->next=NULL;
     else
        p->next=list->front;
    list->length++;
    list->front=p;
    }
 }
 //出栈
 void DeQueue(queue *list,Item *pitem)
 {  
  Qnode tmp=list->front;
  if(IsEmpty(list))
  {
    printf("Error:empty list.\n");
    return;
  }
  else
  {
    if(pitem!=NULL)
      *pitem=tmp->data;
    list->front=tmp->next;
    list->length--;
    free(tmp);
    if(list->length==0)
      list->front=NULL;
  }
 
 }
 void insert(struct Node *parent,struct Node *child)
{   
  struct Node *p;
  if (child==NULL)
    return;
  if(parent->No_Child==0)
  {
    parent->child=child;
    child->IsBegin=1;
    parent->No_Child=1;
  }
  else
  {
    p=parent->child;
    while(p->brother!=NULL)
      p=p->brother;
    p->brother=child;
    child->IsBegin=0;
    parent->No_Child++;
  }
}

void printTree(struct Node* root,FILE *stream)
{   
  struct Node* tmp;
  struct Node* Child;
  struct Node* Brother;

  int i = 0;
  NewQueue=newQueue();
EnQueue(NewQueue, root);
  root->IsBegin=1;
while(!IsEmpty(NewQueue))
  {
    DeQueue(NewQueue, &tmp);
    fprintf(stream,"\n");
    printf("\n");
    for(i = 0; i < tmp->col ;i++){
      fprintf(stream,"%-10s", " ");
      printf("%-10s", " ");
    }
    fprintf(stream,"%d %-1s",tmp->col,tmp->name);
    printf("%d %-1s",tmp->col,tmp->name);

    fprintf(stream," ");
    printf(" ");
    Child=tmp->child;
    Brother=tmp->brother;
    if(Brother!=NULL)
    {
      Brother->col=tmp->col;
      EnQueue(NewQueue,Brother);
    }
    if(Child!=NULL)
    {
      Child->col=tmp->col+1;
      EnQueue(NewQueue,Child);
    }
  }
}

