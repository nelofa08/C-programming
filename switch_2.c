#include<stdio.h>
int main()
{
int choice,choise2;
printf("1.CSE\n2.EEE\n3.BBA\n4.CIVIL\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
    printf("Welcome to the dept of CSE\n");
    printf("1:Information\n2.Teachers\n3.Lab\n");
    printf("Enter your choice:");
    scanf("%d",&choise2);
    switch(choise2)
    {
    case 1:
        printf("Three hundred student\n There are 4 batch\n");
    case 2:
        printf("There are five teachers\n");
    case 3:
        printf("Total Lab 2,one Computer Lab,one Software Lab\n");
        break;
    default :
        printf("INVALID");
    }
    break;
case 2:


          printf("Welcome to the dept of EEE\n");
           printf("1:Information\n2.Teachers\n3.Lab\n");
          printf("Enter your choice:");
          scanf("%d",&choise2);
         switch(choise2)
      {
          case 1:
             printf("Three hundred student\n There are 4 batch\n");
          case 2:
             printf("There are five teachers\n");
         case 3:
            printf("Total Lab two\n");
         break;
         default :
            printf("INVALID");
    }
    break;

case 3:
               printf("Welcome to the dept of BBA\n");
               printf("1:Information\n2.Teachers\n3.Lab\n");
               printf("Enter your choice:");
              scanf("%d",&choise2);
             switch(choise2)
       {
          case 1:
             printf("Three hundred student\n There are 4 batch\n");
          case 2:
             printf("There are five teachers\n");
         case 3:
            printf("Total Lab two\n");
         break;
         default :
            printf("INVALID");
    }
break;
case 4:
          printf("Welcome to the dept of CIVIL\n");
         printf("1:Information\n2.Teachers\n3.Lab\n");
        printf("Enter your choice:");
        scanf("%d",&choise2);
           switch(choise2)
    {
          case 1:
             printf("Three hundred student\n There are 4 batch\n");
          case 2:
             printf("There are five teachers\n");
         case 3:
            printf("Total Lab two\n");
         break;
         default :
            printf("INVALID");
    }
break;
 default:
 printf("INVALID\n");
}
return 0;
}
