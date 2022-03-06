#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node* next;
};

struct node* start;


void insertpos(int data,int pos)
{
    struct node* node1;
    node1=malloc(sizeof(struct node*));
    temp=start
    for(int i=0;i<pos;i++)
    {
        temp=temp->next

    }
    node->next=temp;


}
void insert(int data)
    {
        struct node* node1;
        node1=malloc(sizeof(struct node*));
        if(start==NULL)
        {
            start=node1;
            node1->data=data;
            node1->next=NULL;
            printf("\nFirst Node created");

        }
        else
        {
            node1->data=data;
            node1->next=start;
            start=node1;
            printf("\nNode created");

        }

    }

void display(struct node* p)
{
     while(p!=NULL)
    {
    printf("%d \n",p->data);
    p=p->next;
    }
}

void main()
{
    int data;
    printf("\n enter data");
    scanf("%d",&data);
    insert(data);
    insert(101);
    insert(102);
    insert(104);
    insert(106);
    display(start);



}
