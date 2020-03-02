#include<stdio.h>
int main()
{
    int p=0,q=1,next,n,i,sum=0;
    scanf("%d",&n);

    printf("0+1");
    for(i=1;i<=n-2;i++)

    {

       next=p+q;
       p=q;
       q=next;
       printf("+%d",next);

       sum= sum + next;
 }

  printf("=%d",sum+1);

    return 0;
}


