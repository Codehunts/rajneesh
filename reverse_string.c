#include<stdio.h>
#include<string.h>
 
int main() {
   char str[100], temp;
   int i=0, j = 0;
 
   printf("\nEnter the string :");
   
   scanf("%s",str);
   
   
   
   j = strlen(str) - 1;
 
   while (i < j) 
   {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
 
   printf("\nReverse string is :%s", str);
   return (0);
}
