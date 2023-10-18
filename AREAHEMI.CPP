#include<stdio.h>
#include<conio.h>
void hemispere()
{
int r;
float area;
printf("enter radius of hemisphere");
scanf("%d",&r);
area=3*3.14*r*r;
printf("area of hemispere is %f",area);
}
void main()
{
clrscr();
hemispere();
getch();

}