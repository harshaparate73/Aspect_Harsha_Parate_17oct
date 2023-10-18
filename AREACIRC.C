#include<stdio.h>
#include<conio.h>
void circle()
{
int r;
float area;
printf("enter r");
scanf("%d",&r);
area=3.14*r*r;
printf("area of circle %f",area);
}
void main()
{
clrscr();
   circle();
getch();
}
