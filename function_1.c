#include<stdio.h>
void myAdd(int,int);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    myAdd(a,b);
    return 0;
}
void myAdd(int x,int y)
{
    int s;
    s=x+y;
    printf("sum=%d",s);
}

