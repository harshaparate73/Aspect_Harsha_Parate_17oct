#include<stdio.h>
#include<conio.h>
void triangle(int b,int h);
void main()
{
int x,y;
clrscr();
printf("enter x,y");
scanf("%d %d",&x,&y);
triangle(x,y);
}
 void triangle(int b,int h)
{
float area;
area=0.5*b*h;
printf("%f",area);
getch();
}