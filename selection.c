 #include <stdio.h>
 
int main()
{
  int a[100], n, i, j, num,temp;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
 
  for (i = 0; i< (n - 1); i++)
  {
    num = i;
   
    for (j = i + 1; j < n; j++)
    {
      if (a[num] > a[j])
     num = j;
    }
    if (num != i)
    {
      temp = a[i];
      a[i] = a[num];
      a[num ]= temp;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (i= 0; i < n; i++)
    printf("%d\n", a[i]);
 
  return 0;
}


