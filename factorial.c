#include<stdio.h>

int main()
{
long long int i,a,f=1;
scanf("%lli", &a);
    if(a==0)
    {
        printf("the factorial is 1");
        return 0;
    }
    for(i=1; i<=a; i++)
    {
        f=f*i;
        printf("the factorial is %lli !=%lli",a,f);
    }
return 0;
}
