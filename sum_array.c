#include<stdio.h>
void main()
{
	int a[6],i,sum=0,n,*p;
	printf("Enter the element : ");
	scanf("%d",&n);
   for(i=0;i<n;i++)
  {
   
    scanf("%d",&a[i]);
  }	
    p=a;
    for(i=0; i<n; i++)
{
	sum=sum+*p;
    p++;
}
printf("Sum of element : %d",sum);
getch();
}
