#include<stdio.h>
#include<conio.h>
void sum1()
{
int n1,n2,add;
printf("enter n1,n2");
scanf("%d %d",&n1,&n2);
add=n1+n2;
printf("%d",add);
}
void sub()
{
int s1,s2,res;
printf("enter s1,s2");
scanf("%d %d",&s1,&s2);
res=s1-s2;
printf("%d",res);
}
void multi()
{
int m1,m2,res;
printf("enter m1,m2");
scanf("%d%d",&m1,&m2);
res=m1*m2;
printf("%d",res);
}
void div()
{
int d1,d2,res;
printf("enter d1,d2");
scanf("%d%d",&d1,&d2);
res=d1/d2;
printf("%d",res);
}
void main()
{
clrscr();
sum1();
sub();
multi();
div();
getch();
}