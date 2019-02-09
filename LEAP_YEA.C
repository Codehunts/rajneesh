#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("Enter the Year");
 scanf("%d",&a);
 if (a%4==0)
 {
  printf("Entered Year is a Leap Year");
 }
 else
 {
  printf("Entered Year is not a Leap Year");
 }
 getch();
 }