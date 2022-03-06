#include<stdio.h>

int sum(int *number1, int *number2)
{
    int sum1;
    sum1=*number1+*number2;
    printf("sum is %d",sum1);
}

void main()
{
    int a,b,*ptr1,*ptr2;
    printf("\n Enter two number");
    scanf("%d%d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    sum(ptr1,ptr2);


}
