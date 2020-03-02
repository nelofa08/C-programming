#include<stdio.h>

int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&a==c)
    {
        printf("They are equal");
    }
    else if ((a>b)&&(a>c))
    {
        printf("MAX=%d",a);
    }
    else if ((b>a)&&(b>c))
    {
        printf("MAX=%d",b);
    }
    else if ((c>a)&&(c>b))
    {
        printf("MAX=%d",c);
    }
    return 0;
}
