#include<stdio.h>
#include<conio.h>
void main()
{
int a,res;
clrscr();
printf("enter a");
scanf("%d",&a);
 res=area_cube(a);
 printf("%d",res);
 getch();
 }
 area_cube(int x)
 {
 int r;
 r=6*x*x;
 return r;
 }
