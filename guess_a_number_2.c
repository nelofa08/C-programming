#include<stdio.h>

int main()
{

    int a=1, b=99,c,i;
    char ch;

    printf("\nGuess a number between 1-99: and press enter");

    getch();

    printf("\nNow answer this simple question:");
    printf("\n=================================");
    printf("\nPRESS e for equal, l foe less and g for greater");

    c=(a+b)/2;

    printf("\nIs your number is greater/equal/less than %d",c);
    ch=getche();

    if(ch=='l')
    {
        b=c;
        c=(a+b)/2;
    }
    else if (ch=='g')
    {
        a=c;
        c=(a+b)/2;
    }
    else
    {
        printf("\nYour guessed number is %d", c);
        exit(0);
    }


    c=(a+b)/2;

    printf("\nIs your number is greater/equal/less than %d",c);
    ch=getche();

    if(ch=='l')
    {
        b=c;
        c=(a+b)/2;
    }
    else if (ch=='g')
    {
        a=c;
        c=(a+b)/2;
    }
    else
    {
        printf("\nYour guessed number is %d", c);
        exit(0);
    }

     c=(a+b)/2;

    printf("\nIs your number is greater/equal/less than %d",c);
    ch=getche();

    if(ch=='l')
    {
        b=c;
        c=(a+b)/2;
    }
    else if (ch=='g')
    {
        a=c;
        c=(a+b)/2;
    }
    else
    {
        printf("\nYour guessed number is %d", c);
        exit(0);
    }
     c=(a+b)/2;

    printf("\nIs your number is greater/equal/less than %d",c);
    ch=getche();

    if(ch=='l')
    {
        b=c;
        c=(a+b)/2;
    }
    else if (ch=='g')
    {
        a=c;
        c=(a+b)/2;
    }
    else
    {
        printf("\nYour guessed number is %d", c);
        exit(0);
    }
     c=(a+b)/2;

    printf("\nIs your number is greater/equal/less than %d",c);
    ch=getche();

    if(ch=='l')
    {
        b=c;
        c=(a+b)/2;
    }
    else if (ch=='g')
    {
        a=c;
        c=(a+b)/2;
    }
    else
    {
        printf("\nYour guessed number is %d", c);
        exit(0);
    }


    c=(a+b)/2;

    printf("\nIs your number is greater/equal/less than %d",c);
    ch=getche();

    if(ch=='l')
    {
        b=c;
        c=(a+b)/2;
    }
    else if (ch=='g')
    {
        a=c;
        c=(a+b)/2;
    }
    else
    {
        printf("\nYour guessed number is %d", c);
        exit(0);
    }

}
