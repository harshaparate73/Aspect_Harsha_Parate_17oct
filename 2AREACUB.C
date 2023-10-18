#include<stdio.h>
#include<conio.h>
void cube(int a);
void main()
{
int x;
clrscr();
printf("enter x");
scanf("%d",&x);
cube(x);
}
void cube(int a)
{
int res;
res=6*a*a;
printf("area of cube is %d",res);
getch();
}
