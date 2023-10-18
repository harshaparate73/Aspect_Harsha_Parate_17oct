#include<stdio.h>
#include<conio.h>
void sum(int a,int b);
void main()
{
int n1=5,n2=2;
clrscr();
sum(n1,n2);
}
void sum(int a,int b)
{
int c;
c=a+b;
    printf("%d",c);
    getch();
}