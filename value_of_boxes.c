#include<stdio.h>
#include<math.h>

int main()
{
    float blue_box,red_box,white_box;

    printf("Enter Value of Blue box:");
    scanf("%f",&blue_box);

    printf("Enter Value of red box:");
    scanf("%f",&red_box);

    white_box=blue_box;
    blue_box=red_box;
    red_box=white_box;

    printf("Value of blue box is %f",blue_box);
    printf("Value of red box is %f",red_box);
    return 0;
}

