#include<stdio.h>
int main()
{
    int n,i=1,p1=0,p2=1,newp,t=1;
    scanf("%d",&n);
    printf("%d+%d",p1,p2);
    newp=p1+p2;
    while(i<n-1)
    {
        printf("+%d",newp);
        t=t+newp;
        p1=p2;
        p2=newp;
        newp=p1+p2;
        i++;
    }
    printf("=%d",t);
    return 0;
}

