#include <stdio.h>

int main()
{
int num;
int dig1, dig2, dig3;
    printf("\n enter the three digit input number:");

    dig1=num%10;
    num=num/10;
    dig2=num%10;
    dig3=num/10;
    printf("\n the reverse is %d%d%d", dig1, dig2, dig3);
    return 0;
    }
