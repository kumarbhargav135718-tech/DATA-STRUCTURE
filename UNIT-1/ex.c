#include<stdio.h>
#include<conio.h>

struct student
{
    int rollno;
    char name[20];
};

 void main()
{
      struct student s1;

    printf("\n enter rollnumber :");
    scanf("%d",&s1.rollno);

    printf("\n enter name :");
    scanf("%s",&s1.name);

    printf("\n student data is as follows \n");
    printf("\n ");

    printf("\n rollno is : %d \n ",s1.rollno );

    printf("name is :%s",s1.name);

    getch();
}
