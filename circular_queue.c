#include<stdio.h>

int rear=0;
int front=0;
int max_size=5;
int queue[max_size];


void delete_element()
{
    if(rear==front)
    {

        printf("Queue is empty");

    }
    else
    {
        printf("element deleted %d",queue[front]);
        front=(front%max_size)+1;

    }


}
void insert_element()
{
    int element;
        if((front==0 && rear==max_size)|| rear==front+1)
            {
                printf("Queue is full");
            }
        else
            {
               printf("enter element for inserting");
               scanf("%d",&element);
               rear=(rear%max_size)+1;
               queue[rear]=element;

            }

}

void display()
{


}

void main()
{


}
