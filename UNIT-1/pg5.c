#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],largest;
    int i;

    printf("enter 10 values of array : \n");

    for(i=0;i<10;i++)
    {
        printf("enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    largest=a[0];

    for(i=1;i<=9;i++)
   {
       if (a[i]>largest)

        {
        largest=a[i];
        }
   }
   printf("largest value is %d",largest);

   return 0;
}
