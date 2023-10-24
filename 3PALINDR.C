#include<stdio.h>
#include<conio.h>
void main()
{
int num, r;
clrscr();
printf("enter num");
scanf("%d",&num);
 r=fun(num);
 if(num==r)
 printf("palindrom");
 else
 printf("not palindrom");
     getch();
 }
 int fun(int num)
{
  int d1,d2,d3,rev,org;
  d1=num%10;
 num=num/10;
 d2=num%10;
 num=num/10;
 d3=num%10;
  rev= d1*100+d2*10+d3*1;
   printf("reverse %d\n",rev);
   return rev;
   }




















