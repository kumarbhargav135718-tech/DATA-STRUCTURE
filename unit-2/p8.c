#include <stdio.h>

int min(int a[],int n)
{
    if(n==1)
        return a[0];

    int m=min(a,n-1);

    return (a[n-1]<m)?a[n-1]:m;
}

int max(int a[],int n)
{
    if(n==1)
        return a[0];

    int m=max(a,n-1);

    return (a[n-1]>m)?a[n-1]:m;
}

int main()
{
    int a[10],i;

    printf("Enter 10 Numbers:\n");

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    printf("Minimum = %d\n",min(a,10));
    printf("Maximum = %d\n",max(a,10));

    return 0;
}
