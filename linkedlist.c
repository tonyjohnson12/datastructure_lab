#include<stdio.h>
#include<malloc.h>

struct node
{

int data;
struct node * next;
};
struct node *start;

void printLinkedlist(struct node *p)
{
    while(p!=NULL)
    {
    printf("%d \t",p->data);
    p=p->next;
    }
}

void main()
{
  int data;

  struct node *node1,*node2,*node3,*node4,*node5;
  node1=malloc(sizeof(struct node*));
  node2=malloc(sizeof(struct node*));
  node3=malloc(sizeof(struct node*));
  node4=malloc(sizeof(struct node*));

  node1->data=10;
  node2->data=20;
  node3->data=30;
  node4->data=40;

  node1->next=node2;
  node2->next=node3;
  node3->next=node4;
  node4->next=NULL;

  start=node1;

  node5=malloc(sizeof(struct node*));

  node5->data=100;
  node5->next=node1;
  start=node5;


  printLinkedlist(start);





}
