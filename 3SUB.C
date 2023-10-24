#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,r;
clrscr();
printf("enter a,b");
scanf("%d %d",&a,&b);
r=sub(a,b);
printf("%d",r);
getch();
}
int sub(int p,int q)
{
 int res;
 res=p-q;
  return res;

}