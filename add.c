#include<stdio.h>
int myAdd(int,int);
int main()
{
int a,b,sum;
scanf("%d", &a);
scanf("%d", &b);
sum=myAdd(a,b);
return 0;
}
int myAdd(int x,int y)
{
int tempsum;
tempsum=x+y;
printf("result is %d",tempsum);
return tempsum;
}
