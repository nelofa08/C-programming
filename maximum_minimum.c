#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the numbers:");
    scanf("%d%d", &a,&b);
   if (a>b)
   {
       printf("MAX=%d and MIN=%d",a,b);
   }
   else if (b>a)
   {
       printf("MAX=%d and MIN=%d",b,a);
   }
   else (a==b)
   {
       printf("Number is same");
   }
    return 0;
}


