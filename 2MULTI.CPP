#include<stdio.h>
#include<conio.h>
void multi(int a,int b);
void main()
{
int x,y;
clrscr();
printf("enter x,y");
scanf("%d%d",&x,&y);
multi(x,y);
}
    void multi(int a,int b)
{
int z;
z=a*b;
printf("multiplication is %d",z);
getch();
}


