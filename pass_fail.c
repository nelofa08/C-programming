#include<stdio.h>

int main()
{
    int mark;

    printf("Enter the mark:");
    scanf("%d", &mark);
   if (mark>100 || mark<0)
   {
       printf("Invalid input");
   }
   else if (mark>=40)
    {
        printf("The student has passed");
    }
   else
   {
       printf("The student has failed");
   }
    return 0;
}



