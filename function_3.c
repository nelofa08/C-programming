#include<stdio.h>
void evenOdd(int x)
{
    if(x==0)
    {
        printf("zero");
    }
    else if(x%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    evenOdd(a);
    return 0;
}
