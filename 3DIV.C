#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,r;
clrscr();
printf("enter a,b");
scanf("%d %d",&a,&b);
r=div(a,b);
printf("%d",r);
getch();
}
int div(int p,int q)
{
  int s;
  s=p/q;
     return s;
}