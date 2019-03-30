#include<stdio.h>
#include<conio.h>
void main()
{
  int a[2],i=0,n ;
  clrscr();
  printf("Enter the number ");
  scanf("%d",&n);
  while(n>0)
  {
   a[i]=n%2 ;
   n=n/2 ;
   i++;
  }
   while(i>0)
 {
   i--;
   printf("%d",a[i]);
 }
 getch();
 }