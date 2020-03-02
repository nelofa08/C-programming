#include<stdio.h>

int main()
{
   int a,b;
   int div,rem;

   printf("Enter first integer:");
   scanf("%d",&a);

   printf("Enter second integer:");
   scanf("%d",&b);

   div= a / b;
   rem= a % b;

   printf("div is %d",div);
   printf("\nrem is %d",rem);
   return 0;

}
