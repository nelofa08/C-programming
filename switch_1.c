#include<stdio.h>
int main()
{
float a,b,add,sub,multi,div;
int choice;
printf("Enter the value:");
scanf("%f%f",&a,&b);
printf("Enter your choice:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Divissdion\n");
scanf("%d",&choice);
switch(choice)
{
case 1 :
    add=a+b;
    printf("%f is addition",add);
    break;
    case 2 :
   sub =a-b;
    printf("%f is substra
    break;
    case 3 :
    multi=a*b;
    printf("%f is multiplication",multi);
    break;
    case 4 :
    div=a/b;
    printf("%f is divission",div);
    break;
    default:
        printf("Invalid number");
}
return 0;
}
