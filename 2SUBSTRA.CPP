#include<stdio.h>
#include<conio.h>
void sub(int a,int b);
void main()
{
int x,y;
clrscr();
printf("enter x,y");
scanf("%d%d",&x,&y);
sub(x,y);
}
void sub(int a,int b)
{
int c;
c=a-b;
printf("sub is %d",c);
getch();
}