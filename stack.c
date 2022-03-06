#include <stdio.h>
int  TOP=-1;
#define max_size 10
int stack[max_size];

void push(int element)
{
    if (max_size==TOP)
    {

        printf("Stack is empty");
    }
    else
    {
    TOP=TOP+1;
    stack[TOP]=element;

    }

}

int pop()
{
    int poped_value;
    if (TOP==-1)
    {

        printf("Stack is empty\n");
    }
    else
    {
            poped_value=stack[TOP];
            TOP=TOP-1;
    }
return poped_value;
}
void display()
{

    printf("\n Stack elements :\n");
    for (int i=0;i<=TOP;i++)
    {
        printf("%d\t",stack[i]);
    }
}
void main()
{
int ch,element;

while(1)
    {
printf("Enter your operation\n\
       1:POP\n \
       2:PUSH \
       3:DISPLAY ");
scanf("%d",&ch);

    switch(ch)
        {
        case 1:
            {
            printf("Deleted Value is %d",pop());
            break;
            }
        case 2:
            {
            printf("enter element for inserting");
            scanf("%d",&element);
            push(element);
            break;

            }

        case 3:
            {
            display();
            break;
            }

        }

    }
}
