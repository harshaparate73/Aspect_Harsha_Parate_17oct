#include<stdio.h>
#include<conio.h>
void triangle()
{
int b,h;
float area;
printf("enter b,h");
scanf("%d %d",&b,&h);
area=0.5*b*h;
printf("area of triangle %f",area);
}
void main()
{
clrscr();
triangle();
	   getch();
}
