#include<stdio.h>
void negPos(int);
int main()
{
    int a;
    scanf("%d",&a);
    negPos(a);
    return 0;
}
void negPos(int x)
{
    if(x==0)
    {
        printf("zero");
    }
    else if(x<0)
    {
        printf("negative");
    }
    else
    {
        printf("positive");
    }
}
