#include<stdio.h>
void main()
{
	 
  int sum=0,n,i,v;
  printf("How many numbers you want to add?\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
  
 
  for (i = 1; i <= n; i++)
    
  {
    scanf("%d", &v);
    if(v < 0)
    continue;
    else
    sum = sum + v;
    
  
}
  printf("Sum of the integers = %d\n", sum);

getch();	 
}

	 
	 
	 
	 
	 
	

