#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,s,x;
    float area;

    printf("Enter the value:");
    scanf("%f%f%f", &a,&b,&c);

    s=(a+b+c)/2;
    x=s*(s-a)*(s-b)*(s-c);
    area=sqrt(x);

    printf("Area of triangle is %f", area);
    return 0;
}
