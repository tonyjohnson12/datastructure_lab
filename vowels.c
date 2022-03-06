#include<stdio.h>
void main()
{
    char vow[]="aeiouAEIOU",c;
    int flag=0;
    printf("enter a charactor");
    scanf("%c",&c);
    for (int i=0;vow[i]!='\0';i++)

    {
         if(c==vow[i])
         {
            flag=1;

         }

    }
    if (flag==1)
    {
        printf("letter is vowel");
    }
    else
    {
        printf("no vowel is present");
    }


}
