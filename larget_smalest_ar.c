#include<stdio.h>
void main()
{

    int size,largest,smallest,a[20];
    printf("\n Enter size of array");
    scanf("%d",&size);
    for (int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=smallest=a[0];
    for (int i=0;i<size;i++)
    {
        if (a[i]>largest)
        {
            largest=a[i];
        }
        if (a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    printf("%d is largest and %d is smallest",largest,smallest);
}
