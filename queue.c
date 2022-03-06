#include<stdio.h>
#include<stdlib.h>
int que[50],n,f,r;
void insert()
{
    int item;
    if(r==n)
        printf("Overflow");
    else
    {
        printf("Enter the element : ");
        scanf("%d",&item);
        if(f==0)
            f=1;
        r=r+1;
        que[r]=item;
        printf("\n Inserted Successfully");
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
        f=f+1;
        printf("Deleted Successfully %d",item);
        if(f>r)
        {
            f=0;
            r=0;
        }
    }
}
void display()
{
    int i;
    if(f==0)
        printf("Queue is empty ");
    else
    {
        printf("Current Queue is : \n");
        for(i=f;i<=r;i++)
        {
            printf("%d\t",que[i]);
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
        default:printf("\nInvalid Entry ");
        }
    }while(ch!=4);
}
