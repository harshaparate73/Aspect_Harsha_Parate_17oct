#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void login();
int validate(char u1[], char ps1[]);
void scr1()
{
 int ch;
 while(1)
 {
 printf("press 1 for login");
 printf("press 2 for exit");
 scanf("%d",&ch);
 if(ch==1)
 {
 login();
 }
  if(ch==2)
  {
  exit(0);
  }
  }
  }
void main()
{
  clrscr();
  scr1();
  getch();
  }
  void login()
  {
  char usr[10],ps[10];
  int s;
  clrscr();
  printf("enter username");
  scanf(" %s",usr);
  printf("enter password");
  scanf(" %s",ps);
 s=validate(usr,ps);
  if(s==1)
 {
  printf("login succesfull");
}
  else
  {
  printf("not succesfull");
  }
  }
  int validate(char u1[],char ps1[])
  {
  char tuser[]={"harsha"},tpas[]={"parate"};
  printf("%s %s",u1,ps1);
  if(strcmp(u1,tuser)==0 && strcmp(ps1,tpas)==0)
  {
  return 1;
  }
  else
  {
  return 0;
  }
  }