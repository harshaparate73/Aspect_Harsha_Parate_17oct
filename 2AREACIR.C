#include<stdio.h>
#include<conio.h>
void area_c(int r);
void main()
{
int a;
clrscr();
printf("enter a");
scanf("%d",&a);
area_c(a);
}
void area_c( int r)
{
   float area;
   area=3.14*r*r;
   printf("area of circle is %f",area);
   getch();
   }
