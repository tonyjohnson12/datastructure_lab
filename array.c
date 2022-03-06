#include<stdio.h>
void main()
{
    int a[10];
    printf("\n enter element");
    for(int i=0;i<3;i++)
    {
        printf("\n %dth elemet ",i);
        scanf("%d",&a[i]);

    }

    printf("\n elements");
    for (int i=0;i<3;i++)
    {
        printf("\t%d",a[i]);
    }
}
