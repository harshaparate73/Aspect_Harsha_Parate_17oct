#include<stdio.h>
#include<conio.h>
void trapezoid()
{
int a,b,h,res;
printf("enter a,b,h");
scanf("%d %d %d",&a,&b,&h);
res=(a+b)*h/2;
printf("area of trapezoid %d",res);
}
void main()
{
clrscr();
trapezoid();
getch();
}
