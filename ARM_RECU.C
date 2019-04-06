#include<stdio.h>
#include<math.h>
int arm(int,int);
int main()
 {
   int num,sum=0,times=0,temp;
   clrscr();
   printf("Enter the number to check for armstrong\n");
   scanf("%d",&num);
   temp=num;
   while(temp !=0)
   {
     times= times+1;
     temp=temp/10;
   }
   sum = arm(num,times);
   printf("Sum of entered number is= %d\n",sum);
   if(num==sum)
   printf("\n%d is  armstrong number:\n",num);
   else
   printf("%d is not armstrong number\n",num);
   return 0;
   }
    int arm(int num,int times)
   {
    static int reminder,sum=0;
    if(num>0)
    {
      reminder=num%10;
      sum=sum+pow(reminder,times);
      arm(num/10,times);
      return sum;
    }
    else
    return 0;

  }

