#include<stdio.h>
int main()
{
    int i,n,ch,count=0;
    for(n=2;n<=200;n++)
    { ch=0;
    if(n==1)
    {

    }
    else if(n==2)
    {
        printf("%d\n",n);
        count++;

    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                ch++;

            }
        }
        if(ch==0)
        {
            printf("%d \n",n);
            count++;

        }
        else{}
    }


        {

        }
    }
    printf("Total Prime= %d",count);
    return 0;
}
