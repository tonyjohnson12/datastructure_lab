
#include<stdio.h>

void main()
{
 int array[10],size,low,high,mid,number,flag=0;
 printf("\n enter size of array");
 scanf("%d",&size);
 printf("enter elements");
 for(int i=0;i<size;i++)
 {
    scanf("%d",&array[i]);
 }
 printf("\n enter item element need to search");
 scanf("%d",&number);

low=0;
high=size;

for(int i=0;i<size;i++)
{
    mid=(low+high)/2;

    if(array[mid]==number)
    {
    flag=1;
    printf("item found in %d",mid);
    break;
    }
    else if( array[mid]>number)
    {
    high=mid;
    }
    else
    {
    low=mid;
    }

}

if (flag==0){
printf("\n element not present");
}


}
