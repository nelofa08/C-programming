#include<stdio.h>
void evenOdd(int);
int main()

{
    int n;
    scanf("%d", &n);
    evenOdd(n);
    return 0;

}
void evenOdd(int a)
{
    if(a==0)
    {
        printf("zero");
    }
    else if(a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

}
