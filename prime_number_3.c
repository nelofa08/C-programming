#include<stdio.h>
int main()
{
int n,i,count=0;
scanf("%d", &n);
    if(n==1)
    {
        printf("not prime");
    }
   else if(n==2)
    {
        printf("prime");
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("prime");
        }
        else
        {
        printf("not prime");
        }
    }
    return 0;
}
