#include <stdio.h>
void delete_element(int ar[],int pos,int size)
{
   printf("\n Deleted Element is  %d",ar[pos]);
   for(int i=pos;pos<=size-1;pos++)
   {
       ar[pos-1]=ar[pos];

   }
}
void insert_element(int ar[],int pos,int size,int elemet)


{
  pos=pos-1;
   for (int i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
    printf("\n");
    for(int i=size;i>=pos;i--)
    {
        ar[i]=ar[i-1];
    }
    ar[pos]=elemet;

    for (int i=0;i<size+1;i++)
    {
        printf("%d\t",ar[i]);
    }
    printf("\n");
}

void main()
{
    int arr[50],size,op,pos=0,element;
    printf("enter array size");
    scanf("%d",&size);
    printf("enter Array elements");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n opreation number\n \
           1 ----> insert\n\
           2-------> delete\n\
           3------->traverse");
    scanf("%d",&op);

    switch(op)
    {
        case 2:
            {
                printf("\n enter the position number ");
                scanf("%d",&pos);
                delete_element(arr,pos,size);
            }
       case 1:
            {
                printf("\n enter the position number ");
                scanf("%d",&pos);
                printf("\n enter element ");
                scanf("%d",&element);
                insert_element(arr,pos,size,element);
            }
        case 3:
            {
            printf("\n elements are:");
            for(int i=0;i<size;i++)
            {
                printf("%d\t",arr[i]);
            }

            }
    }

}
