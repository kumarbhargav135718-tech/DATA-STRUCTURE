#include <stdio.h>

int main()
{
    int a,b,i,min;

    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);

    min = (a<b)?a:b;

    for(i=2;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            printf("Smallest Common Divisor = %d",i);
            return 0;
        }
    }

    printf("No Common Divisor except 1");

    return 0;
}
