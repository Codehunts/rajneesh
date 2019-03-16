#include<stdio.h>
#include<conio.h>
void main()
{
  int n,s,i,a,b,c;
  clrscr();
  printf("Enter the number of terms\n: ");
  scanf("%d",&n);
  printf("Enter the number from which you want to start the fibonacci series: ");
  scanf("%d",&s);
   a=s;
   b=s+1;


  printf("%d\t",a);

  printf("%d\t",b);

  for(i=1; i<n; i++)
  {
     c=a+b;
     printf("%d\t",c);
     a=b;
     b=c;

  }
  getch();
}