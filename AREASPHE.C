#include<stdio.h>
#include<conio.h>
void sphere()
{
int r;
float area;
printf("enter r");
scanf("%d",&r);
area=4*3.14*r*r;
printf("area of sphere %f",area);
}
void main()
{
  clrscr();
  sphere();
  getch();
}
