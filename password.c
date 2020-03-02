#include <stdio.h>
#include <conio.h>
int main()
{
char ch1, ch2, ch3, ch4;
char ph1, ph2, ph3, ph4;

    printf ("\n enter password:");
ch1=getch();
printf("*");
ch2=getch();
printf("*");
ch3=getch();
printf("*");
ch4=getch();
printf("*");

    fflush(stdin);

    printf("\n re enter password:");
ph1=getch;
printf("*");
ph2=getch();
printf("*");
ph3=getch();
printf("*");
ph4=getch();
printf("*");

if(ch1==ph1 && ch2==ph2 && ch3==ph3 && ch4==ph4)
{
printf("\ncorrect");
}
else
{
printf("\nwrong");
}
return 0;
}
