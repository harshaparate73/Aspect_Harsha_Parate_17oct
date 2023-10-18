  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int a[10],i,j,no,search,temp;
  clrscr();

  printf("enter the size of array\n");
  scanf("%d",&no) ;
  printf("enter the value of matrix\n");
  for(i=0;i<no;i++)
  {
  scanf("%d",&a[i]);
  }
  printf("enter the search no\n");
  scanf("%d",&search);
  printf("logic of bubble sort\n");
  for(i=0;i<no;i++)
  {
  for(j=0;j<no;j++)
    {
       if(a[i]>a[j])
       {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       }
       }
       }    getch();
       }