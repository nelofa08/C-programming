#include<stdio.h>
int main(){
int num,x,y,z;
printf("Enter a 3 digit number:");
scanf("%d",&num);

x=num/100;
y=(num%100)/10;
z=(num%100)%10;

if(x==0){printf("zero");}
if(x==1){printf("one");}
if(x==2){printf("two");}
if(x==3){printf("three");}
if(x==4){printf("four");}
if(x==5){printf("five");}
if(x==6){printf("six");}
if(x==7){printf("seven");}
if(x==8){printf("eight");}
if(x==9){printf("nine");}

if(y==0){printf("zero");}
if(y==1){printf("one");}
if(y==2){printf("two");}
if(y==3){printf("three");}
if(y==4){printf("four");}
if(y==5){printf("five");}
if(y==6){printf("six");}
if(y==7){printf("seven");}
if(y==8){printf("eight");}
if(y==9){printf("nine");}

if(z==0){printf("zero");}
if(z==1){printf("one");}
if(z==2){printf("two");}
if(z==3){printf("three");}
if(z==4){printf("four");}
if(z==5){printf("five");}
if(z==6){printf("six");}
if(z==7){printf("seven");}
if(z==8){printf("eight");}
if(z==9){printf("nine");}

return 0;
}
