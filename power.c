#include<stdio.h>
#include<math.h>

int main()
{
    float a,b;
    float p;

    printf("Enter two integers:");
    scanf("%f%f",&a, &b);

    p=pow(a,b);

    printf("P is %f", p);
    return 0;
}
