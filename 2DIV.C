#include<stdio.h>
#include<conio.h>
void div(int x,int y);
void main()
{
int a,b;
clrscr();
printf("enter a,b");
scanf("%d%d",&a,&b);
div(a,b);
}
void div(int x,int y)
{
int z;
 z=x/y;
 printf("%d",z);
 getch();
 }
