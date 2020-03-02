#include<stdio.h>
#include<math.h>

int main()
{
    float x1,y1,x2,y2,a;
    float dis;

    printf("Enter length:");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);

    a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

    dis=sqrt(a);

    printf("Distance is %f",dis);
    return 0;
}
