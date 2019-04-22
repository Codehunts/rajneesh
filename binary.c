#include <stdio.h>
 
int main()
{
   int i, f, l, m, n, k, a[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers\n", n);
 
   for (i=0;i<n;i++)
      scanf("%d",&a[i]);
 
   printf("Enter value to find\n");
   scanf("%d", &k);
 
   f=0;
   l=n-1;
   m=(f+l)/2;
 
   while(f<=l)
   {
   	if(a[m]>k)
   	f=m+1;
   	else
   	if(a[m]<k)
   	f=m-1;
   else if(a[m]==k)
   printf("Location of %d is %d",k,m+1);
  
   break;
  
}
  
   
   if (a[m]!=k)
      printf("Not found! %d isn't present in the list.\n", k);
 
   return 0;  
}	                                                                                   
