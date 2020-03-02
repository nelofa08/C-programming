#include<stdio.h>

int main()
{
    float cen, fer;

    printf("Enter Temperature in centigrade:\n");
    scanf("%f", &cen);

    fer=(cen*9)/5+32;

    printf("Temperature in fahrenheit is %f\n", fer);
    return 0;
}
