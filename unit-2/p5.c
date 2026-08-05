#include<stdio.h>
#include<conio.h>
int stack[10];
int top=-1;

void push(int number)

        {
            top++;
            stack[top]=number;
        }


int pop()
        {
            int v;
            v=stack[top];
            top--;
            return v;
        }

void main()
{



    int number,power,i,value,mul;

    printf("enter number");
    scanf("%d",&number);

    printf("enter power");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
        push(number);
    }
    mul=1;
    for(i=1;i<=power;i++)
    {
        value=pop();
        mul=mul*value;
    }
    printf("power of  number is =%d ",mul);
    getch();
}
