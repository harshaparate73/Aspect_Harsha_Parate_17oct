#include<stdio.h>
#include<conio.h>
void main()
{
int a;
float area;
clrscr();
printf("enter a");
scanf("%d",&a);
 area=area_hemi(a);
 printf("%f",area);
 getch();
 }
 area_hemi(int r)
 {
 int res;
 res=3*3.14*r*r;
 return r;
 }
