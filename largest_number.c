#include <stdio.h>

int main()
{
    double n1, n2, n3;
        printf("enter three numbers : ");
        scanf("%1f %1f %1f , &n1, &n2, &n3");

        if ( n1>=n2 && n1>=n3 )
            printf("%.2f is the largest number");
        if ( n2>=n1 && n2>=n3 )
            printf("%.2f is the largest number");
        if ( n3>=n1 && n3>=n2 )
            printf("%.2f is the largest number");

        return 0;


    }
