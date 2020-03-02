#include<stdio.h>
#include<math.h>

int main()
{
float w, h, BMI;
    printf("enter w");
    scanf("%f", &w);

    printf("enter h");
    scanf("%f", &h);

    BMI = (w/(h*h));

    printf("answer is %f", BMI);
    return 0;
    }
