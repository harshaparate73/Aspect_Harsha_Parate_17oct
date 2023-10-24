#include<stdio.h>
#include<coni.h>
void main()
{
int a,b;
float area;
clrscr();
printf("enter a,b");
scanf("%d %d",&a,&b);
area=area_eclipse(a,b);
printf("%f",area);
getch();
}
int area_eclipse(int x,int y)
{
int r;
r=3.14*x*y;
return r;
}