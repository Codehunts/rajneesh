#include<stdio.h>
#include<conio.h>

int add_numbers(int n);
int main()
{
  int num;
  clrscr();
  printf("Enter a positive number: ");
  scanf("%d",&num);
  printf("sum= %d",add_numbers(num));
 return 0;
}
 int add_numbers(int n)
  {
   if(n!=0)
    return n+add_numbers(n-1);
   else
    return 0;
  }
