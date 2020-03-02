#include<stdio.h>
#include<math.h>

int main()
{
    float x1,y1,x2,y2,a;
    float r,area,peri;

    printf("Enter the point:");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

    r=sqrt(a);
    area = 3.1416*r*r;
    peri= 2*3.1416*r;

    printf("r is %f",r);
    printf("\nArea is %f",area);
    printf("\nPerimeter is %f",peri);
    return 0;
}
