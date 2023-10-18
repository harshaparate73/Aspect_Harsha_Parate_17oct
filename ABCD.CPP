#include<stdio.h>
#include<conio.h>
int main()
{
int nor,star=3,space=-1,i;

for(nor=1;nor<=4;nor++)
{
for(i=1;i<=star;i++)
{
printf("*");
}
for(i=1;i<=space;i++)
printf(" ");
for(i=1;i<=star;i++)
printf("*");

if(nor==1)
printf("*");
else
star--;
space+=2;
printf("\n");
}

getch();
}

