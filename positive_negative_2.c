#include<stdio.h>
void posNeg(int);
int main()

{
    int n;
    scanf("%d", &n);
    posNeg(n);
    return 0;

}
void posNeg(int a)
{
    if(a==0)
    {
        printf("zero");
    }
    else if(a>0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }

}
