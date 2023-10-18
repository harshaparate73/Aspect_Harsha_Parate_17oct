#include<stdio.h>
#include<conio.h>
void force(int m,int a);
void main()
{
int m,a;
clrscr();
printf("enter m,a");
scanf("%d %d",&m,&a);
force(m,a);
}
void force(int m,int a)
{
 int force;
 force=m*a;
 printf("force %d",force);
 getch();
 }