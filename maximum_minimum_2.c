#include <stdio.h>
void Min(int,int,int);
void Max(int ,int,int);
int main()
{
    int a,b,c,m;
    printf("Enter 1 for maximum.\nEnter 0 for minimum.\n");
    scanf("%d", &m);
    if(m==0)
    {
        scanf("%d%d%d", &a,&b,&c);
        Min(a,b,c);
    }

    if(m==1)
    {
        scanf("%d%d%d", &a,&b,&c);
        Max(a,b,c);
    }

    return 0;
}


void Max(int x,int y,int z)
{

    if(x==y && x==z)
    {
        printf("Equal");
    }
    else if(x>=y && x>=z)
    {
        printf("Max is %d", x);
    }

    else if(y>=x && y>=z)
    {
        printf("Max is %d", y);
    }

    else
    {
        printf("Max is %d", z);
    }

}

void Min(int x,int y,int z)
{
    if(x==y && x==z)
    {
        printf("Equal");
    }
    else if(x<=y && x<=z)
    {
        printf("Min is %d", x);
    }

    else if(y<=x && y<=z)
    {
        printf("Min is %d", y);
    }

    else
    {
        printf("Min is %d", z);
    }
}


