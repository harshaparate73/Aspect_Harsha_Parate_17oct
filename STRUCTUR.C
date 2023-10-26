#include<stdio.h>
#include<conio.h>
struct stud
{
char name[10];
int age;
char add[10];
char phone_no[11];
}s1;
void main()
{
clrscr();

printf("enter name");
scanf("%s",s1.name);
printf("enter age");
scanf("%d",&s1.age);
printf("enter add");
scanf("%s",s1.add);
printf("enter phone no");
scanf("%s",s1.phone_no);


printf("\nname= %s",s1.name);
printf("\nage= %d",s1.age);
printf("\nadd= %s",s1.add);
printf("\nphone_no= %s",s1.phone_no);

 getch();
 }