#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,r;
clrscr();
printf("enter a,b");
scanf("%d%d",&a,&b);
r=sum(a,b);
printf("%d",r);
}
int sum(int x,int y)
{
 int res;
 res=x+y;
    return res;
     getch();
 }