
#include<stdio.h>

int front=0;
int rear=0;
int size=5;
int que[10];

void deque()
{
if (front==rear)
{
printf("\n queue is empty");
}
else{
printf("Deleted element is %d",que[front]);
front=(front%size)+1;
}
}

void enque()
{
int data;
if((front==0 && rear==size)||(front==(rear%size)+1))
{
printf("\n que is full");
}
else
{
printf("enter value to insert");
scanf("%d",&data);
if(front==0)
{
front=1;
}
rear=(rear%size)+1;
que[rear]=data;
}
}

void display()
{
for(int i=front+1;i<=rear;i++)
{
printf("\t%d",que[i]);
}

}
void main()
{
int ch;
while(1)
{
printf("\n 1   insert \n \
           2   delete \n  \
           3   display");

scanf("%d",&ch);

switch(ch)
{
case 1:enque();break;
case 2:deque();break;
case 3:display();break;
case 4:exit(0);

}
}


}
