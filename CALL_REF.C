#include<stdio.h>

int swap(int *a, int *b);
int swap(int *a, int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
   return (temp);
  }
  int main()
   {
    int x=5,y=10;
    clrscr();
    swap(&x,&y);
    printf("%d=x,%d=y",x,y);
    return (x,y);
    }
