//GUESS A NUMBER//
#include<stdio.h>
int main(){
int user_guess;
int guess_num=50;

printf("I guessed a number from 1-99.Can u guess it?");

scanf("%d",&user_guess);

if(user_guess<guess_num)
{
    printf("\nYour input is Small");
}
else if(user_guess>guess_num)
{
    printf("\nYour input is Large");
}
else
{
    printf("\nYou have input correct number");
}

if(user_guess !=guess_num)
{
printf("\nEnter number again:");
scanf("%d",&user_guess);
//1//
if(user_guess<guess_num)
{
    printf("\nYour input is Small");
}
else if(user_guess>guess_num)
{
    printf("\nYour input is Large");
}
else
{
    printf("\nYou have input correct number");
}
}
//2//
if(user_guess !=guess_num)
{
printf("\nEnter number again:");
scanf("%d",&user_guess);
if(user_guess<guess_num)
{
    printf("\nYour input is Small");
}
else if(user_guess>guess_num)
{
    printf("\nYour input is Large");
}
else
{
    printf("\nYou have input correct number");
}
}
//3//
if(user_guess !=guess_num)
{
printf("\nEnter number again:");
scanf("%d",&user_guess);
if(user_guess<guess_num)
{
    printf("\nYour input is Small");
}
else if(user_guess>guess_num)
{
    printf("\nYour input is Large");
}
else
{
    printf("\nYou have input correct number");
}
}
//4//
if(user_guess !=guess_num)
{
printf("\nEnter number again:");
scanf("%d",&user_guess);
if(user_guess<guess_num)
{
    printf("\nYour input is Small");
}
else if(user_guess>guess_num)
{
    printf("\nYour input is Large");
}
else
{
    printf("\nYou have input correct number");
}
//5//
if(user_guess !=guess_num)
{
printf("\nEnter number again:");
scanf("%d",&user_guess);
if(user_guess<guess_num)
{
    printf("\nYour input is Small");
}
else if(user_guess>guess_num)
{
    printf("\nYour input is Large");
}
else
{
    printf("\nYou have input correct number");
}
}

return 0;
}
}
