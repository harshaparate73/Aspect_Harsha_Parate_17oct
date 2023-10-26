#include<stdio.h>
#include<conio.h>
struct emp
{
int id;
char name[10];
char mob[11];
}e1;

void main()
{
int i;
struct emp e1[5];
clrscr();
for(i=0;i<=4;i++)
{

printf("enter id");
scanf("%d",&e1[i].id);
printf("enter name");
scanf("%s",e1[i].name);
printf("enter mob");
scanf("%s",e1[i].mob);
}

for(i=0;i<=4;i++)
 {
 if(e1[i].id==2)
 {
  printf("\n id=%d",e1[i].id);
  printf("\n name=%s",e1[i].name);
  printf("\n mob=%s",e1[i].mob);

  }

  }
  getch();
  }