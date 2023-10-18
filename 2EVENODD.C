#include<stdio.h>
#include<conio.h>
void evenodd(int a);
void main()
{
int p;
clrscr();
printf("enter p");
scanf("%d",&p);
evenodd(p);
}
void evenodd(int a)
{
if(a%2==0)
{
printf("%d is even",a);
}
else
{
printf("%d is odd",a);
}
getch();
}
