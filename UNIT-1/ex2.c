#include<stdio.h>
#include<conio.h>

enum week{mon,tue,wed,thu,fri,sat,sun};

void main()
{
    enum week w;
    w = tue ;

    printf("\n consonant value of tue is : %d",w);

    getch();
}
