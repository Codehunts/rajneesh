#include<stdio.h>
#include<conio.h>
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
    int x,y;
    clrscr();

    printf("\nEnter the value of x: ");
    printf("\nEnter the value of y: ");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("\nx=%d",x);
    printf("\ny=%d",y);
    return (x,y);
    }