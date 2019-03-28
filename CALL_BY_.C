#include<stdio.h>

void swap(int x, int y);
void swap(int x, int y)
 {
   int t;
     t=x;
     x=y;
     y=t;
  printf("\nx=%d,y=%d",x,y);
 }
   void main()
   {
      int a=10,b=20;
      clrscr();
      swap(a,b);
      printf("\na=%d,b=%d",a,b);
   }
