#include<stdio.h>
void main()
{
    int num,*ptr;
    printf("\n enter numbers");
    scanf("%d",&num);

    ptr=(int*)malloc(num*sizeof(int));

    if (ptr==NULL)
    {
        printf("\n memory is allocated");
    }
    for(int i=0;i<num;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<num;i++)
    {
        printf("%d \t",ptr[i]);
    }

}
