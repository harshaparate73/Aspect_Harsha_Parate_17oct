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
  int y;
  y=6*a*a;
  printf("area of cube %d",y);
  getch();
  }