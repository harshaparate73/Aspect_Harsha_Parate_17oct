//2 palindrom
#include<stdio.h>
#include<conio.h>
void fun( int n);
void main()
{
int num;
clrscr();
printf("enter num");
scanf("%d",&num);
fun(num);
getch();
}
void fun(n)
{
int org,rev,d1,d2,d3;
org=n;
d1=n%10;
n=n/10;
d2=n%10;
n=n/10;
d3=n%10;
rev=d1*100+d2*10+d3*1;
printf(" reverse %d",rev);
if(org==rev)
printf("it is palindrom");
else

printf("not palindrom");

}
