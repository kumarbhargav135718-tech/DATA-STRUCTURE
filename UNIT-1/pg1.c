#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],i,s;
    printf("enter 10 values :\n");

    for(i=0;i<10;i++)
    {
        scanf("%d\n",&a[i]);
    }



    printf("10 values are \n");

   for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }

    printf("enter the value want to serch");
    scanf("%d",&s);

       for(i=0;i<=9;i++)
       {
           if(s==a[i])
           {
               break;
           }

       }
       if(i==10)
       {
           printf("values not found");
       }
       else
       {
           printf("value fount at location %d",i);
       }

    getch();

}
