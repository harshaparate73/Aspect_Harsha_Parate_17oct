#include<stdio.h>
#include<conio.h>
void main()
{
int q;
float area;
clrscr();
printf("enter q");
scanf("%d",&q);
area=area_c(q);
printf("%f",area);
getch();
}
  int area_c(int x)
{
 int r;
 r= 3.14*x*x;
 return r;
}
