#include<stdio.h>
#include<conio.h>
void main()
{
 int n,num,r=0,sum=0;
 clrscr();
 printf("Enter the number ");
 scanf("%d",&n);
 num=n;
 while(n>0)
 {
   r= n%10;
   sum=sum+(r*r*r);
  n= n/10;
 }
 if(sum==num)
   {
   printf("Number is armstrong number");
   }
 else
    {
     printf("Number is not armstrong number");
    }
   getch();
   }
