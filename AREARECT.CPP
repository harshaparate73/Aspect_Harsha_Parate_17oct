#include<stdio.h>
#include<conio.h>
void rectangle()
{
int length,breadth;
float area;
printf("enter length,breadth");
scanf("%d %d",&length,&breadth);
 area=length*breadth;
 printf("area of rectangle %f",area);
 }
 void main()
 {
  clrscr();
  rectangle();
  getch();

 }