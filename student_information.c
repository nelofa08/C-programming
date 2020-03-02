#include<stdio.h>
#include<stdlib.h>
void main()

{

          int age;
          float gpa;
          char gender;

          printf("\tenter age & gpa & gender\n");

          scanf("%d%f",&age,&gpa);

          fflush(stdin);
          scanf("%c",&gender);

          printf("\tstudent information\n\tage=%d\n\tgpa=%.2f\n\tgender=%c\n",age,gpa,gender);

}
