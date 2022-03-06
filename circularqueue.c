#include<stdio.h>
#include<stdlib.h>
int que[50],f=0,r=0,n;
void insert()
{
    int item;
    if((f==1&&r==n)||(f==r+1))
        printf("Overflow");
    else
    {
        if(f==0)
        {
            f=1;
            r=1;
        }
        else if(r==n)
        {
            r=1;
        }
        else
        {
            r=r+1;
        }
        printf("Enter the element : ");
        scanf("%d",&item);
        que[r]=item;
        printf("Insert successfully");
    }
}
void delete()
{
    int item;
    if(f==0)
        printf("Underflow");
    else
    {
        item=que[f];
        if(f==r)
        {
            f=0;
            r=0;
        }
        else if(f==n)
            f==1;
        else
            f=f+1;
        printf("Deleted Successfully");
    }
}
void display()
{
    int i;
    if(f==0)
        printf("Queue is empty");
    else
    {
        printf("Current Queue is : \n");
        if(f>r)
        {
            for(i=f;i<=r;i++)
                {
                    printf("%d\t",que[i]);
                }
            for(i=1;i<=r;i++)
                {
                    printf("%d\t",que[i]);
                }
        }
        else
        {
            for(i=f;i<=r;i++)
            {
                printf("%d\t",que[i]);
            }
        }
    }
}
void main()
{
    printf("Enter the size of Queue : ");
    scanf("%d",&n);
    printf("Queue Operation \n");
    int ch;
    do
    {
         printf("\n\n Menu\n 1.Insert\n 2.Delete\n 3.Display\n 4.Exit\n Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {
                insert();
                break;
            }
        case 2:
            {
                delete();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            exit(0);
        default:printf("\nvalid Entry ");
        }
    }while(ch!=4);
}


