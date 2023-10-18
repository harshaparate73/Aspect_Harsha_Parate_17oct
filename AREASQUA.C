#include<stdio.h>
#include<conio.h>
void square()
{
int x;
float area;
printf("enter x");
scanf("%d",&x);
area=x*x;
printf("area of square %f",area);
}
void main()
{
 clrscr();
 square();
 getch();
}
