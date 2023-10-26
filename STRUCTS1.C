#include<stdio.h>
#include<conio.h>
struct customer
{
int id;
char name[10];
char mob[11];
}s1,s2;
void main()
{
clrscr();
printf("enter id");
scanf("%d",&s1.id);
printf("enter name");
scanf("%s",s1.name);
printf("enter mob");
scanf("%s",s1.mob);
  printf("\nid=%d",s1.id);
  printf("\nname=%s",s1.name);
  printf("\nmob=%s",s1.mob);
       printf("\n");

printf("enter id");
scanf("%d",&s2.id);
printf("enter name");
scanf("%s",s2.name);
printf("enter mob");
scanf("%s",s2.mob);
  printf("\nid=%d",s2.id);
  printf("\nname=%s",s2.name);
  printf("\nmob=%s",s2.mob);
  getch();
  }